#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}node;

node *head = 0, *newnode, *temp, *tail;

void createNode(int data){

    newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->next=0;
    newnode->prev=0;

    if(head == 0){
        head = newnode;
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
    displayList();    
}
