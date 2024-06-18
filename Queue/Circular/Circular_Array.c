#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define Size 5
int queue[Size];
int front = -1,rear = -1,element;
bool isEmpty(){
    if(front == -1 && rear == -1){
        return true;
    }
    else{
        return false;
    }

}
bool isFull(){
    if(((rear+1)%Size == front) || (front == 0 && rear == Size-1)){
        return true;
    }
    else{
        return false;
    }
}
void enQueue(){
    if(isFull()){
        printf("Queue is Full!!");
    }
    else if(isEmpty()){
        front = 0;
        rear = 0;
        printf("Enter Element for EnQueue:");
        scanf("%d",&element);
        queue[rear] = element;
        
    }
    else{
        rear = (rear +1) % Size;
        printf("Enter Element for EnQueue:");
        scanf("%d",&element);
        queue[rear] = element;
    }
} 
void deQueue(){
    if(isEmpty()){
        printf("Queue is Empty!!!");
    }
    else if(front == rear){
        printf("Deleted Value is %d ",queue[front]);
        front = -1;
        rear = -1;
    }
    else if(front == Size-1){
        printf("Deleted Value is %d ",queue[front]);
        front = 0;
    }
    else{
        printf("Deleted Value is %d ",queue[front]);
        front = (front+1) % Size;
    }
}
void display(){
    if(isEmpty()){
        printf("Queue is Empty!!");
    }
    else if(rear>=front){
        printf("\nElements in Queue are:");
        for(int i = front ;i<=rear;i++){
            printf(" %d ",queue[i]);
        }
    }
    else{
        printf("\nElements in Queue are:");
        for(int i = front ;i<Size;i++){
            printf(" %d ",queue[i]);
        }
        for (int i = 0; i <= rear; i++)
            printf(" %d ", queue[i]);
    }
}
void main(){
    int ch;
    do{
    printf("\n1.EnQueue\n2.DeQueue\n3.Display\n4.Exit\n");
    printf("\nEnter Your choice: ");
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