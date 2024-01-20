#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}node;


void insertAtEnd(node **head, int newValue){

    // new node
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = newValue;
    newNode->next = 0;

    // if list is empty 
    if(*head == 0){
        *head = newNode;
        // return;
    }
    // if list is not empty
    else{
        node *last = *head;
        // traverse/visit till node->next not equal to 0
        while(last->next != 0){
            last = last->next;
        }
        // if 0 found
        // node->next = newnode // points to new node
        last->next = newNode;
    }
}

void printList(node *head){
    node *temp = head;
    while (temp != 0)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void main(void){
    node *head = 0;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 140);

    printList(head);
}
