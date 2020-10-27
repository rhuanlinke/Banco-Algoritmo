#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

int main()
{
    // LISTA CRIADA VAZIA
    Node* head = create();

    printf("\nOnly head:");
    head->value = 0;
    head->next = NULL;
    printList(head);

    printf("\nAdd new values at the end:");
    addToEnd(&head, 1);
    addToEnd(&head, 2);
    addToEnd(&head, 3);
    addToEnd(&head, 4);
    addToEnd(&head, 5);
    printList(head);
    
    printf("\nAdd new value at the beginning:");
    addToBeginning(&head, 6);
    printList(head);

    printf("\nAdd new value ordenated: 7 to 10");
    addOrdenated(&head, 7, 10);
    printList(head);
    
    int valueToBeRemoved = 3;
    printf("\nRemove by value: %d", valueToBeRemoved);
    removeByValue(&head, valueToBeRemoved);
    printList(head);

    printf("\nRemoved value: %d from last position\n", removeLast(&head));
    printf("Removed value: %d from last position\n", removeLast(&head));
    printf("Removed value: %d from last position\n", removeLast(&head));
    printf("Removed value: %d from last position\n", removeLast(&head));
    printf("Removed value: %d from last position\n", removeLast(&head));
    printList(head);

    printf("Removed value: %d from last position\n", removeLast(&head));
    addToEnd(&head, 7);
    
    printList(head);

    valueToBeRemoved = 6;
    printf("\nRemove by value: %d", valueToBeRemoved);
    removeByValue(&head, valueToBeRemoved);

    return 0;
}