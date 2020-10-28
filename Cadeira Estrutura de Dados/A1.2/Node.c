#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

Node* create() {
    Node* head = NULL;
    
    head = (Node*) malloc(sizeof(Node));
    
    if (head == NULL) {
        printf("Couldn't allocate memory");
        return NULL;
    } else {
      return head;
    }
}

void addToBeginning(Node** head, int value) {
    // CRIA NOVO NÓ
    Node* newNode = create();
    
    newNode->value = value;
    newNode->next = *head;

    *head = newNode; 
}

void addToEnd(Node** head, int value) {
    // VERIFICA SE TEM ALGO NA LISTA
    if (*head == NULL) {
      printf("Unable to add to null list");
    } else {
      // PERCORRE ATÉ O FINAL
      Node* currentNode = *head;
      
      while(currentNode->next != NULL){
        currentNode = currentNode->next;
      }

      // CRIA NOVO NÓ
      Node* newNode = create();
      
      newNode->value = value;
      newNode->next = NULL;

      // SETA O NOVO NÓ COMO ÚLTIMO
      currentNode->next = newNode;
    }
}

int removeLast(Node** head){
    int removedValue = 0;
    Node* next = (**head).next;

    // VERIFICA SE TEM ALGO NA LISTA
    if (next == NULL) {
      printf("Next value is: %p\n", next);

      removedValue = (**head).value;

      *head = NULL;
      free(*head);

      return removedValue;
    } else {
      // PERCORRE ATÉ O FINAL
      Node* currentNode = *head;
    
      while(currentNode->next->next != NULL){
        currentNode = currentNode->next;
      }

      removedValue = currentNode->next->value;
    
      free(currentNode->next);
      currentNode->next = NULL;
    
      return removedValue;
    }
}

void removeByValue(Node** head, int value){
    if (*head == NULL) {
      printf("\nList is already empty!");
    } else {
      // PERCORRE ATÉ O ACHAR NODE
      Node* currentNode = *head;
      
      while(currentNode->next->value != value || currentNode->next->next == NULL){
        currentNode = currentNode->next;
      }

      if (currentNode->next->next != NULL) {
        Node* nodeToBeRemoved = currentNode->next;
        
        currentNode->next = nodeToBeRemoved->next;

        free(nodeToBeRemoved);
      }
    }
}

//Adiciona um nó de forma ordenada (sequencial) não deu muito certo..
void addOrdenated(Node** head, int value, int valueTarget){
    
    if (*head == NULL) {
      printf("Unable to add to null list");
    } else {

      Node* currentNode = *head;
      int i = 7;
      printf("\n%d",value);

      while(currentNode->next != NULL){
        currentNode = currentNode->next;
      }

      // CRIA NOVO NÓ ATÉ CHEGAR NO VALUE
      while(value < valueTarget){
        Node* newNode = create();    
    
        newNode->value = value;
        value++;
        newNode->next = NULL;
        currentNode->next = newNode;
      }
      
    }
}

void printList(Node* head){
    Node* currentNode = head;
    
    if (currentNode != NULL) {
        printf("\n--LIST--\n");
        
        while(currentNode != NULL){
          printf("Value: %d\n", currentNode->value);
          currentNode = currentNode->next;
        }

        printf("--------\n");
    } else {
      printf("\nList is empty\n");
    }
}