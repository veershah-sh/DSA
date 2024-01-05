/*
    insert at start
    insert at end
    insert after a value
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void insertNode(node *newnode, node *head){
    printf("Enter data to insert at start: ");
    scanf("%d",&newnode->data);

    // insert at start
    newnode->next = head;
    head = newnode;
}

void main(){
    node *head, *newnode, *temp;
    head = 0;
    int ch=1;
    while (ch == 1)
    {
        // creating one single node
        newnode = (node*)malloc(sizeof(node));

        // data
        printf("Enter data of node: ");
        scanf("%d", &newnode->data);
        // link
        newnode->next = 0;

        if(head == 0){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter your choice (0,1): ");
        scanf("%d",&ch);
    }

    int other;
    printf("Do you want to insert any other node(0/1): ");
    scanf("%d",&other);
    if(other == 1){
        printf("Enter data to insert at start: ");
        scanf("%d",&newnode->data);

        // insert at start
        newnode->next = head;
        head = newnode;
    }
    
    // traverse 
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        // break;
    }     
}

