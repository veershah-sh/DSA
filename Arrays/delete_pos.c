#include<stdio.h>
#define UB 50

void main(void){
    int arr[UB], size, pos;

    printf("Enter size of array: ");
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        printf("Entre value of element[%d]",i);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("Elemet[%d]: %d\n",i,arr[i]);
    }

    printf("Enter position to delete element: ");
    scanf("%d",&pos);

    for (int i = pos-1; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;

    printf("\nTraversal after delete\n");
    for (int i = 0; i < size; i++)
    {
        printf("Elemet[%d]: %d\n",i,arr[i]);
    }        
}