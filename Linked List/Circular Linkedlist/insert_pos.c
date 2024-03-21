#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}node;

node *head=0, *temp;

void createNode(int data){
    node *newnode;

    newnode = (node*)malloc(sizeof(node));
    // head=0;
    newnode->data = data;
    newnode->next = 0;

    if(head == 0){
        head = newnode;
        temp = newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }

    temp->next = head;
}

void insertPos(int data){
    node *insert;

    insert = (node*)malloc(sizeof(node));
    insert->data = data;
    insert->next = 0;

    int pos, i=1;
    printf("Enter position to insert node: ");
    scanf("%d",&pos);

    temp = head;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }

    insert->next = temp->next;
    temp->next = insert;
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

    insertPos(121);
    insertPos(112);
    traverseList();
}
