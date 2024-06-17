#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
    int data;
    struct node *next;
}node;
node *front=0,*rear = 0;
node *newnode;
bool isEmpty(){
    if(front==0 && rear==0){
       return true; 
    }
    else{
        return false;
    }
}
void enqueue(){
    int ch = 1;
   while(ch==1){
   newnode = (node*)malloc(sizeof(node));
   printf("Enter the node in Queue:");
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
   printf("Do you want to insert other Node(0/1):");
   scanf("%d",&ch);
 }
  
}
void dequeue(){
    int ch=1;
    while(ch==1){
    if(isEmpty()){
        printf("Queue is Empty!!");
    }
    else{
        node *temp;
        temp = front;
        printf("\nDeleted value is %d:",front->data);
        front = front->next;
        free(temp);
    }
    printf("\nDo you want to delete the node(0/1)?? ");
    scanf("%d",&ch);
    }
}
void peek(){
    if(isEmpty()){
        printf("Queue is Empty!!");
    }
    else{
        printf("The first value of Queue is :%d",front->data);
    }
}
void display(){
    printf("\n");
    node *temp;
    temp = front;
    if(isEmpty()){
        printf("\nQueue is Empty!!\n");
    }
    else{
        while(temp!=0){
            printf("%d |",temp->data);
            temp = temp->next;
        }
    }
}
void main(){
    enqueue();
    display();
    dequeue();
    display();
    peek();
}