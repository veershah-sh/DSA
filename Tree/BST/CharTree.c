/*
Create Tree Using  Alphabets
PreOrder: A B C D E F G
InOrder : C B D A F E G
PostOrder :C D B F G E A
*/

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    char data;
    struct node* left;
    struct node* right;
}node;
node* createTree(){
   char data;
   node* newnode = (node*)malloc(sizeof(node));
   printf("\nEnter the characters node in tree(n or N for no node):");
   scanf(" %c",&data);
   newnode->left =  0;
   newnode->right = 0;
   if(data=='n'||data=='N'){
    return 0;
   }
   newnode->data = data;
   printf("\nEnter left child of %c",data);
   newnode->left = createTree();
   printf("\nEnter Right child of %c",data);
   newnode->right = createTree();
   return newnode;
}
void preOrder(node* root){
    if(root==0){
        return;
    }
    printf(" %c ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(node* root,node* temp){
    if(root==0){
        return;
    }
    temp = root;
    inOrder(root->left,temp);
    printf(" %c ",root->data);
    inOrder(root->right,temp);
}
void postOrder(node* root,node* temp){
    if(root==0){
        return;
    }
    temp = root;
    postOrder(root->left,temp);
    postOrder(root->right,temp);
    printf(" %c ",root->data);
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
