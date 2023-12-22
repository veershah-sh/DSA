#include<stdio.h>
#define UB 50

void main(){
    int arr[UB], new_element, size;

    printf("Enter no. of element in array: ");
    scanf("%d",&size);
    for(int i=0; i<size; i++){
        printf("Enter element[%d]: ",i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i++){
        printf("Enter element[%d]: %d\n",i, arr[i]);
    }

    printf("Enter elment to insert at beginning: ");
    scanf("%d",&new_element);

    // main logic
    for(int i=size-1; i>=0; i--){
        arr[i+1] = arr[i];
    }

    // value insert at start
    arr[0] = new_element;

    // increment size by 1
    size++;

    printf("New Updated Array\n");
    for(int i=0; i<size; i++){
        printf("Enter element[%d]: %d\n",i, arr[i]);
    }
}
