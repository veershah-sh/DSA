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

void deletePos(int pos){
    int i = 1;
    temp = head;
    while(i<pos){
        temp = temp->next;
        i++;
    }

    // step-1
    temp->prev->next = temp->next;
    // step-2
    temp->next->prev = temp->prev;
    // step-3
    free(temp);
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
    createNode(40);

    displayList();

    deletePos(3);
    deletePos(2);
    // first and last node to delete (Edge case condition)
    // deletePos(4);
    printf("\nAfter Delete\n");
    displayList();    
}