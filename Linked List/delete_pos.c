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

void deleteFromPos(node** head, int pos) {
    if((*head) == 0){
        printf("Linked List is empty\n");
    }
    else{
        node *temp, *nextNode;
        int i = 1;
        temp = (*head);
        // for traversing
        while(i < pos-1){
            temp = temp->next;
            i++;
        }
        // inserting value in nextNode from temp->next
        nextNode = temp->next;

        temp->next = nextNode->next;
        free(nextNode);
    }
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
    int pos;

    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    printList(head);

    printf("Enter position to delete: ");
    scanf("%d",&pos);
    if(pos <= 0){
        printf("Invalid Position\n");
    }
    else if(pos == 1){
        deleteFromBeginning(&head);
    }
    else{
        deleteFromPos(&head, pos);
    }
    printf("Linked List after deleting from position: ");
    printList(head);

    return 0;
}
