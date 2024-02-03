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

void deleteFromEnd(node** head) {
    if((*head) == 0){
        printf("Linked List is empty\n");
    }
    else{
        node *temp, *prev;
        temp = (*head);
        // for traversing
        while(temp->next != 0){
            prev = temp;
            temp = temp->next;
        }

        // updating value & delete last node
        // if there is only one node
        if(temp == (*head)){
            *head = 0;
            free(temp);
        }
        else{
            // for more than one node
            prev->next = 0;
            free(temp);
        }
        // free(temp);
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
    deleteFromEnd(&head);
    deleteFromEnd(&head);
    deleteFromEnd(&head);
    printf("Linked List after deleting from end: ");
    printList(head);

    return 0;
}
