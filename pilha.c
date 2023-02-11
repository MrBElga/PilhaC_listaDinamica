#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include "tad1.h"

char menu(){
	system("cls");
	printf("[A] - PUSH\n");
	printf("[B] - POP\n");
	printf("[C] - ELEMENTO TOPO\n");
	printf("[D] - EXIBE\n");
	printf("[ESC] - OPCAO:");

	return toupper(getch());
}


int main(){
	int aux;
	char op;
	pilha *p;
	
	init(&p);

	do{
		op = menu();
		system("cls");
		switch (op){
			case 'A':
				scanf("%d", &aux);
				push(&p,aux);
			break;
			case 'B':
				pop(&p);
			break;

			case 'C':
				printf("%d",top(p));
				getch();
			break;
			case 'D':
				exibe(p);
				getch();
			break;
		}
	}while(op!=27);

/* 	fflush(stdin);
	aux=getch()-48;
	
	while(!(aux == 0)){
		push(&p,aux);
		exibe(p);
		printf("TOPO: %d\n",top(p));
		
		fflush(stdin);
		aux=getch()-48;
	}
	
	if(!(p==isEmpety(p))){
		pop(&p);
		exibe(p);
		printf("TOPO: %d",top(p));
	}
	else{
		printf("PILHA: vazia");
	} */
	return 0;
}
