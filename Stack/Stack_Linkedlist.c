#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

node *top = NULL;

void pushNode() {
    node *newnode = (node*)malloc(sizeof(node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter the node data to push onto the stack: ");
    scanf("%d", &newnode->data);

    newnode->next = top;
    top = newnode;
    printf("Node pushed onto stack\n");
}

void popNode() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        node *temp = top;
        printf("Deleted value is %d\n", top->data);
        top = top->next;
        free(temp);
    }
}

void printNode() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        node *temp = top;
        printf("Stack elements: ");
        while (temp != NULL) {
            printf("%d | ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    int ch;

    do {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                pushNode();
                break;
            case 2:
                popNode();
                break;
            case 3:
                printNode();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("\nInvalid choice\n");
        }
    } while (ch != 4);

    return 0;
}
