#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int top = -1;
int stack[SIZE];
int isEmpty(){
    if(top==-1){
     return 1;
    }
    else{
        return 0;
    }
}
int isFull(){
    if(top==SIZE-1){
      return 1;
    }
    else{
      return 0;
    }
}
void push(){
    int data;
    if(isFull()){
        printf("Stack is Overflow!!");
        exit(0);
    }
    else{
        printf("Enter the data in stack:");
        scanf("%d",&data);
        top++;
        stack[top] = data;
    }
}
void pop(){
    if(isEmpty()){
        printf("The Stack is empty!!");
        exit(0);
    }
    else{
        int item;
        item =  stack[top];
        top--;
      printf("Deleted value is %d",item);
    }
}
int peek(){
    if(isEmpty()){
        printf("The stack is already empty:");
        exit(0);
    }
    else{
    return stack[top];
    }
}
void count(){
    int count = 0;
    if(top==-1){
        printf("Stack is empty!!");
    }
    else{
    for(int i = 0;i<=top;i++){
        count++;
    }
    printf("\n");
    printf("The available values in stack is:%d\n",count);
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty!!");
    }
    else{
    for(int i = 0;i<=top;i++){
        printf("%d |",stack[i]);
    }
    printf("\n");
    }
}
void main(){
    int flag=1,ch;
    printf("1.push\n2.pop\n3.Display\n4.peek\n5.Count values\n6.Exit\n");
    while(flag==1){
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("The top most Element is:%d",peek());
            break;
        case 5:
            count();
            break;
        case 6:
            flag=0;
            printf("\nProgram quit\n");
        default:
             printf("Enter valid choice!\n");
             break;
        }
    }
}