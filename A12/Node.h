#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

typedef struct node {
    int value;               // 4 bytes
    struct node* next;   // 4 bytes
} Node;

Node* create();

void addToBeginning(Node** head, int value);

void addToEnd(Node** head, int value);

void addOrdenated(Node** head, int value, int valueTarget);

int removeLast(Node** head);

void removeByValue(Node** head, int value);

void printList(Node* head);

#endif // NODE_H_INCLUDED