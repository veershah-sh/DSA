#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}node;

node *head=0, *temp, *tail, *prev;

void createNode(int data){
    node *newnode;

    newnode = (node*)malloc(sizeof(node));
    // head=0;
    newnode->data = data;
    newnode->next = 0;

    if(head == 0){
        head = newnode;
        tail = newnode;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    }

    tail->next = head;
}

void deleteEnd(){
    if(head == 0){
        printf("Linked list is emptu.\n");
    }
    else{
        prev = head;
        temp = tail;
        while(prev->next->next != head){
            prev = prev->next;
        }
        prev->next = head;
        tail = prev;
        free(temp);
    }
}

void traverseList(){
    temp = head;
    if(head == 0){
        printf("Linked list is empty.\n");
    }
    else{
        while (temp->next != head)
        {
            printf("%d -> ",temp->data);
            temp = temp->next;
        }
        printf("%d",temp->data);
        printf("\nFirst Node: %d\n",temp->next->data);
    }
}

void main(){
    createNode(10);
    createNode(20);
    createNode(30);
    createNode(50);
    createNode(60);

    deleteEnd();
    deleteEnd();

    traverseList();
}