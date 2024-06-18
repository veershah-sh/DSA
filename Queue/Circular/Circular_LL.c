#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
    int data;
    struct node * next;
}node;
node *front = 0,*rear = 0,*newnode,*temp;
bool isEmpty(){
    if(front == 0 && rear == 0){
        return true;
    }
    else{
        return false;
    }
}
void enQueue(){
    newnode = (node*)malloc(sizeof(node));
    printf("Enter the data for enQueue: ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    if(isEmpty()){
        front = newnode; 
        rear = newnode;
        
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
    rear->next = front;
}
void deQueue(){
    temp = front;
    if(isEmpty()){
        printf("Queue is Empty!!");
    }
    else if(front == rear){
        printf("\nDeleted value is: %d\n",temp->data);
        front = rear = 0;
        free(temp);
    }
    else{
        printf("\nDeleted value is: %d\n",temp->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }
}
void display(){
    temp = front;
    if(isEmpty()){
        printf("Queue is Empty!!!");
    }
    else{
        printf("\nCircular Queue is: ");
        do{
            printf(" %d -> ",temp->data);
            temp = temp->next;
        }while(temp!=front);
         printf(" %d ",temp->data);  // for circular
    }
}
void main(){
    int ch;
    do{
        printf("\n1.EnQueue\n2.DeQueue\n3.Display\n4.Exit\n");
        printf("Enter Your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1 :
                    enQueue();
                    break;
            case 2:
                    deQueue();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    exit(0);
            default:
                    printf("Invalid choice!!");

        }
    }while(ch!=4);
}