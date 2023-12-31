#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASHSIZE 307

#define TOKEN_LENGTH 200

typedef struct Reference_List{
    int lineno;
    struct Reference_List *next;
}Reference_List;

typedef struct Table_List{
	char symbolTable_name[TOKEN_LENGTH];
    int scope;
    Reference_List *lines;
    char symbolTable_type[TOKEN_LENGTH];
	struct Table_List *next;
}Table_List;

//Declarations
static Table_List **hash_table;
extern int indent_depth;

extern int pop();
extern int peek();
void init_hash_table(); 
unsigned int hash(char *key); 
void insert(char* type, char* name, int lineno, int len); 
Table_List *lookup(char *name); 
void print_symbol_table();
void reset_depth();
void print_symbol_table();
void check_scope(char *name, int lineno);
void is_iter(char *name, int lineno);
void check_while();

//Definitions
int cur_scope = 0;
int flag = 0;
int func_no = 0;

void init_hash_table(){
	int i;
	hash_table = malloc(HASHSIZE * sizeof(Table_List*));
	for(i = 0; i < HASHSIZE; i++) hash_table[i] = NULL;
}

unsigned int hash(char *key){
	unsigned int hashval = 0;
	unsigned int p_power = 1;
	const int p = 31;
	for(;*key!='\0';key++){
		hashval = (hashval + (*key - 'a' + 1)*p_power)%HASHSIZE;
		p_power = (p_power * p)%HASHSIZE;
	}
	return hashval % HASHSIZE;
}

void insert(char *type, char *name, int lineno, int len){
	if(flag==1) cur_scope = func_no;
	unsigned int hashval = hash(name);
	Table_List *l = hash_table[hashval];
	while ((l != NULL) && (strcmp(name,l->symbolTable_name) != 0)) l = l->next;
	while((l != NULL) && (l->scope != cur_scope)) l = l->next;

	
	if (l == NULL){
		l = (Table_List*) malloc(sizeof(Table_List));
		strncpy(l->symbolTable_name, name, len);
		strncpy(l->symbolTable_type,type,strlen(type));
		l->scope = cur_scope;
		l->lines = (Reference_List*) malloc(sizeof(Reference_List));
		l->lines->lineno = lineno;
		l->lines->next = NULL;
		l->next = hash_table[hashval];
		hash_table[hashval] = l;
	}
	
	else{
			strcpy(l->symbolTable_type, type);
			Reference_List *t = l->lines;
			while (t->next != NULL) t = t->next;
			t->next = (Reference_List*) malloc(sizeof(Reference_List));
			t->next->lineno = lineno;
			t->next->next = NULL;
	}
}

void check_scope(char *name, int lineno){
	Table_List *l = lookup(name);
	if(l == NULL){
		printf("Variable %s not defined at line %d\n", name, lineno);
 		exit(1);
	} 
	if(l->scope == 0) return;
	if(l->scope != cur_scope){
		printf("Variable %s not defined at line %d\n", name, lineno);
 		exit(1);
	}
}

Table_List *lookup(char *name){
	unsigned int hashval = hash(name);
	Table_List *l = hash_table[hashval];
	while ((l != NULL) && (strcmp(name,l->symbolTable_name) != 0)) l = l->next;
	Table_List *l_temp = l;
	while((l != NULL) && (l->scope != cur_scope)) l = l->next;
	if(l == NULL) return l_temp;
	return l;
}


void reset_depth()
{
    while(peek()) pop();
    indent_depth = 10;
}

void is_iter(char *name, int lineno){
	Table_List *l = lookup(name);
	if(strcmp(l->symbolTable_type, "List identifier") != 0){
		printf(" %s is not an iterable at line %d\n", name, lineno);
		exit(1);	
	}
}

void print_symbol_table() {
    int i;
    printf("|------------------------------------------------------------------------|\n");
    printf("| %-20s | %-15s | %-10s | %-15s |\n", "Token Name ", "Token Type", "Token Scope", "At Line Numbers");
    printf("|----------------------|-----------------|------------|-----------------|\n");
    
    for (i = 0; i < HASHSIZE; ++i) {
        if (hash_table[i] != NULL) {
            Table_List *l = hash_table[i];
            while (l != NULL) {
                Reference_List *t = l->lines;
                printf("| %-20s | %-15s | %-10d |", l->symbolTable_name, l->symbolTable_type, l->scope);

                while (t != NULL) {
                    printf(" %4d", t->lineno);
                    t = t->next;
                }
                printf(" \n");
                l = l->next;
            }
        }
    }

    printf("|--------------------------------------------------------------------|\n");
}


