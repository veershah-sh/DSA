#include<stdio.h>
#define UB 50

void main(){
    int arr[UB], new_element, size, pos;

    printf("Enter no. of element in array: ");
    scanf("%d",&size);
    for(int i=0; i<size; i++){
        printf("Enter element[%d]: ",i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i++){
        printf("Enter element[%d]: %d\n",i, arr[i]);
    }

    printf("Enter position to insert value: ");
    scanf("%d", &pos);

    printf("Enter elment to insert at pos[%d]: ",pos);
    scanf("%d",&new_element);

    if(pos<0 || pos>size+1){
        printf("Invalid Position.\n");
    }
    else{
        // main logic
        for(int i = size-1; i>=pos-1; i--){
            arr[i+1] = arr[i];
        }

        // insert element
        arr[pos-1] = new_element;
        size++;
    }

    printf("\nUpdated Array\n");
    for(int i=0; i<size; i++){
        printf("Enter element[%d]: %d\n",i, arr[i]);
    }
}