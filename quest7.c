#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    int value;
    struct Node* prox;
}Node;

typedef struct{
    Node* head;
    int tamanho;
}List;

void init(List* l){
    l->tamanho = 0;
    l->head = NULL;
}

Node* retorna_intersec(List* l1, List* l2){
    Node* node1 = malloc(sizeof(Node)), *aux1;
    node1 = l1->head;
    Node* node2 = malloc(sizeof(Node)), *aux2;
    node2 = l2->head;
    aux1=node1;

    while(aux1->prox != NULL){
        aux2 = node2;
        while(aux2->prox != NULL){
            if((aux1->prox) == (aux2->prox)){
                return aux1->prox;
            }
            aux2=aux2->prox;
        }
        aux1=aux1->prox;
    }
}

void insert_end(List* l, int value){
    Node* node = malloc(sizeof(Node)), *aux=l->head;
    node->prox=NULL;
    node->value = value;

    if(aux==NULL){
        l->head = node;
    }else{
        while(aux->prox != NULL){
            aux = aux->prox;
        }

        aux->prox = node;
    }

    l->tamanho = l->tamanho+1;
}

void remover_duplicados(List* l){
    Node* no = l->head, *aux, *aux1;
    while(no->prox != NULL){
        aux = no->prox;
        while(aux->prox != NULL){
            if(aux->value == no->value){
                aux1 = aux->prox;
                aux->prox = aux1->prox;
                free(aux);
            }
            aux=aux->prox;
        }

        no=no->prox;
    }
}

