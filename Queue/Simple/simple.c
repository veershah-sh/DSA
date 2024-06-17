#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX 5 //Macro
int front = -1,rear = -1;
int queue[MAX];
bool isEmpty(){
    if(front==-1&&rear==-1){
       return true;
    }
    else{
        return false;
    }
}
bool isFull(){
    if(rear==MAX-1){
        return true;
    }
    else{
        return false;
    }
}
void enqueue(){
    int data;
    printf("Enter the Data in Queue:");
    scanf("%d",&data);
    if(isFull()){
        printf("Queue is full!!\n");
    }
    else if(isEmpty()){
        rear = 0;
        front = 0;
        queue[rear] = data;
    }
    else{
        rear++;
        queue[rear] = data;
    }
}
void dequeue(){
    if(isEmpty()){
        printf("Queue is Empty!!\n");
    }
    else if(front==rear){
        printf("Deleted value is %d \n",queue[front]);
        front = rear = -1;
    }
    else{
        printf("Deleted value is %d \n",queue[front]);
        front++;
    }
}
void _front(){
    if(isEmpty()){
        printf("Queue is empty!!\n");
    }
    else{
        printf("Current position of front:%d\n",queue[front]);
    }
}
void _rear(){
    if(isEmpty()){
        printf("Queue is empty!!\n");
    }
    else{
        printf("Current position of rear:%d\n",queue[rear]);
    }
}
void display(){
    if(isEmpty()){
        printf("Queue is empty!!\n");
    }
    else{
       printf("\nElements of Queue :");
        for(int i = front;i<rear+1;i++){
            printf("%d ",queue[i]);
        }
    }
}
void main(){
    int ch;
    do{
       printf("\n1.Enqueue\n2.Deueue\n3.Current position of Front\n");
       printf("4.Current pos of Rear\n5.Display\n6.Exit\n");
       printf("Enter Your choice:");
       scanf("%d",&ch);
       switch(ch){
            case 1:
                   enqueue();
                   break;
            case 2:
                    dequeue();
                    break;
            case 3:
                    _front();
                    break;
            case 4:
                      _rear();
                      break;
            case 5:
                      display();
                      break;
            case 6:
                      exit(0);
            default:
                      printf("Enter valid choice !!");
       } 
    }while(ch!=6);
}
