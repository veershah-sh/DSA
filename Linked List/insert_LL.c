#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

// typedef struct node node;
// node *head, *newNode; -- optional

node* insertAtBeginning(node* head, int newData) { 
    node *newNode = (node*)malloc(sizeof(node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
    return head;
}

void main(void)
{
    node *head = 0;
    node *temp;

    head = insertAtBeginning(head, 50);
    head = insertAtBeginning(head, 40);
    // traverse
    temp = head;
    while (temp != 0)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
