
/*
Need This all for Create Tree
1. Structure
2. Linked list
3. Recursion
*/

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}node;
// This function is return address of the node.
node* createNode(){
    int  data;
    node *newnode;
    newnode = (node*)malloc(sizeof(node));
    newnode->left = 0;  
    newnode->right = 0;
    printf("Enter the data for node (-1 for no node):");
    scanf("%d",&data);
    // check data is -1 no node is created 
    if(data==-1){
        return 0;
    }
    newnode->data = data;  // allocate data to newnode
    // Enter data in left side of root node.
    printf("Enter left child of %d.\n",data);
    /*
    here we insert data in left side of root node so we use recursion
       creating function using recursion.
       allocate memory to left child node.
       This function is also apply for creating other childs node
    */    
    newnode->left = createNode();
    printf("Enter Right child of %d.\n",data);
     /*
    here we insert data in Right side of root node so we use recursion
       creating function using recursion.
       allocate memory to Right child node.
       This function is also apply for creating other childs node
    */ 
    newnode->right = createNode();  
    return newnode; 
}
void main(){
    /*
    above createNode() return address of node and this node type 
    variable is used for when function return node this is come in root pointer
    */
    node *root = createNode();
    

}
