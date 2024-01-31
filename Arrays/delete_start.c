#include<stdio.h>
#define UB 50

void main(void){
    int arr[UB],size;

    printf("Enter size of array: ");
    scanf("%d",&size);

    // insert value in array
    for (int i = 0; i < size; i++)
    {
        printf("Enter element[%d]: ",i);
        scanf("%d", &arr[i]);
    }

    // traversal of array
    for (int i = 0; i < size; i++)
    {
        printf("Element[%d] : %d\n",i,arr[i]);
    }

    // delete first element from array
    for(int i=0; i<size;i++){
        arr[i] = arr[i+1];
    }
    size--;
    
    // traversal of array after delete
    for (int i = 0; i < size; i++)
    {
        printf("Element[%d] : %d\n",i,arr[i]);
    }
}