#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}node;

node *newnode, *temp, *tail;

void createNode(node **head, int data){
    newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->next=0;
    newnode->prev=0;

    if(*head == 0){
        *head = newnode;
        temp = newnode;
        tail = newnode;
    } 
    else{
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
        tail = newnode;
    }
}

node *insertEnd(node **head,int data){
    node *insertNew = (node*)malloc(sizeof(node));
    insertNew->data = data;
    insertNew->next = insertNew->prev = 0;

    if(*head == 0){
        *head = insertNew;
        tail = insertNew;
    }
    else{
       tail->next = insertNew;
       insertNew->prev = tail;
       tail = insertNew;
    }
    return *head;
}

void displayList(node **head){
    temp = *head;
    while(temp != 0){
        printf("%d ",temp->data);
        temp = temp->next;
        printf("-> ");
    }
}

void main(void){
    node *head = 0;
    createNode(&head,10);    
    createNode(&head,20);    
    createNode(&head,30);   

    insertEnd(&head,50);
    insertEnd(&head,80);

    displayList(&head); 
}