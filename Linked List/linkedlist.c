#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;
// typedef struct node node;

void main(void){
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
    
    // traverse 
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
