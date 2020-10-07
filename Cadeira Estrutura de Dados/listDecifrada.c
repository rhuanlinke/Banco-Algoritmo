#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

typedef struct node {
	int info;
	struct node* proximo; //Apontando para a proxima struct.. criando uma list
} Node;

