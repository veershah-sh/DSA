/*
Traversal Using Preorder,postOrder,InOrder
1. Inorder: leftNode - rootNode - rightNode
Ex. 3 2 4 1 9 8 7
2. PreOrder:rootNode - leftNode - rightNode
Ex. 1 2 3 4 8 9 7
3. PostOrder:leftNode - rightNode - rootNode
Ex. 3 4 2 9 7 8 1
*/

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}node;
node* createTree(){
    int data;
    node* newnode;
    newnode = (node*)malloc(sizeof(node));
    printf("\nEnter the Node in the tree (-1 for No node):");
    scanf("%d",&data);
    newnode->left  = 0;
    newnode->right = 0;
    if(data==-1){
        return 0;
    }
    newnode->data = data;
    printf("\nEnter left child node of %d:",data);
    newnode->left = createTree();
    printf("\nEnter Right child node of %d:",data);
    newnode->right = createTree();
    return newnode;
}
void preOrder(node* root){
    if(root == 0){
        return;
    }
    printf(" %d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(node* root, node* temp){

    if(root == 0){
        return;
    }
    temp = root;
    postOrder(root->left,temp);
    postOrder(root->right,temp);
    printf(" %d ",root->data);
}
void inOrder(node* root,node* temp){
    if(root == 0){
        return;
    }
    temp = root;
    inOrder(root->left,temp);
    printf(" %d ",root->data);
    inOrder(root->right,temp);
}
void main(){
    node* root = createTree();
    printf("\nThis is Tree Traversals\n");
    printf("\n1. INORDER\n");
    inOrder(root,root);
    printf("\n2. PREORDER\n");
    preOrder(root);
    printf("\n3. POSTORDER\n");
    postOrder(root,root);
}
