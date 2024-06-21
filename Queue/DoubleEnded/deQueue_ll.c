#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
typedef struct node{
    int data;
    struct node *next;
}node;
node *front = 0,*rear = 0,*newnode,*temp;

bool isEmpty(){
    if(front==0 && rear == 0){
        return true;
    }
    else{
        return false;
    }
}
void enqueue_Front(){
    newnode = (node*)malloc(sizeof(node));
    printf("Enter the data in node at front:");
    scanf("%d",&newnode->data);
    newnode->next = front;
    front = newnode;
    if(isEmpty()){
        rear = newnode;
        
    }
   
    
}
void enqueue_Rear(){
    newnode = (node*)malloc(sizeof(node));
    printf("Enter the data in node at rear:");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    if(isEmpty()){
        front = newnode;
        rear = newnode;
    }
    else {
        rear->next = newnode;
        rear = newnode;   
    }
}
void display(){
    //node *temp;
    temp = front;
    while(front!=0){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d ",temp->data);
}
int main(){
    int ch;
    printf("\n1.Insert Front\n2.Insert rear.\n3.Display\n");
    do{
        printf("\nEnter Your choice:");
        scanf("%d",&ch);
        switch (ch){
        case 1:    
                 enqueue_Front();
                 break;
        case 2:
                 enqueue_Rear();
                 break;
        case 3:
                 display();
                 break;
        default: 
                printf("Enter Valid choice!!");
                break;
        }
    }while(ch!=4);
}
