#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <windows.h>

struct Pilha
{
    int info;
    struct Pilha *prox;
};
typedef struct Pilha pilha;

int isEmpety(pilha *inicio){
	return inicio == NULL;
}

void init(pilha **inicio){
		*inicio = NULL;
}

void push(pilha **inicio , int aux){
    pilha *novo = (pilha*) malloc(sizeof(pilha));
    
	novo->info = aux;
    novo->prox = *inicio;
	*inicio = novo;

}

void pop(pilha **inicio, int *info){
	pilha *aux = *inicio;
	
	if(!isEmpety(*inicio)){
		
		*info = (*inicio)->info;
		*inicio = (*inicio)->prox;
		free(aux);	
	}
	else{
		*info = -1;
	}
}

int top(pilha *inicio){
	return inicio->info;
}



void exibe(pilha *inicio){
    system("cls");
    if(inicio == NULL){
    	printf("PILHA: vazia");
	}
	else{
		printf("PILHA:");
	    while(inicio != NULL){
	        printf("%d ", inicio->info);
	        inicio=inicio->prox;
	    }
	}
	printf("\n");
}
