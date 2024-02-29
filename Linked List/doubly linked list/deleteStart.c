#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}node;

node *head = 0, *newnode, *temp;

void createNode(int data){

    newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->next=0;
    newnode->prev=0;

    if(head == 0){
        head = newnode;
        temp = newnode;
    } 
    else{
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
}

void deleteStart(){
    if(head == 0){
        printf("Linked list is empty\n");
    }
    else{
        temp = head;
        head = head->next;
        head->prev = 0;
        free(temp);
    }
}

void displayList(){
    temp = head;
    while(temp != 0){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
}

void main(void){
    createNode(10);    
    createNode(20);    
    createNode(30);

    deleteStart();

    displayList();    
}