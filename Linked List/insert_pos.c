#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;
// typedef struct node node;
int count=0;

void insertPos(node **head, int pos, int data){
    node *newnode, *temp;

    newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = 0;
    
    if(pos == 1 || *head == 0){
        newnode->next = *head;
        *head = newnode;
    }

    // while(i<pos){
    //     temp = temp->next;
    //     i++;
    // }

    temp = *head;
    for(int i=1; i<pos-1 && temp != 0; i++){
        temp=temp->next;
    }

    if(temp == 0){
        printf("Invalid...\n");
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void printList(node *head){
    // node *temp = head;
    while (head != 0)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void main(void){
    node *head = (node*)malloc(sizeof(node));
    node *tempNode = (node*)malloc(sizeof(node));

    head->data = 1;
    head->next = tempNode;

    tempNode->data = 2;
    tempNode->next = 0;

    insertPos(&head,2,220);
    insertPos(&head,3,320);
    insertPos(&head,2,520);
    insertPos(&head,3,620);
    
    // traverse 
    printList(head);    
}