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

    printf("Enter elmenet to insert at end: ");
    scanf("%d",&new_element);

    // increment size by 1
    size++;

    // main logic
    arr[size-1] = new_element;

    printf("New Updated Array\n");
    for(int i=0; i<size; i++){
        printf("Enter element[%d]: %d\n",i, arr[i]);
    }
}