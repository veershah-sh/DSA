#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}node;

void insertAtBeginning(node** head, int value) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = *head;

    *head = newNode;
}

void deleteFromBeginning(node** head) {
    if((*head) == 0){
        printf("Linked List is empty\n");
    }
    else{
        node *temp;
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void printList(node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    node* head = NULL;

    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    printList(head);

    deleteFromBeginning(&head);

    printf("Linked List after deleting from beginning: ");
    printList(head);
    return 0;
}
