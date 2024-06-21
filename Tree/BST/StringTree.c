#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    char data[15];
    struct node* left;
    struct node* right;
}node;

node *createTree(){
    char data[10];
    node* newnode = (node*)malloc(sizeof(node));
    printf("\nEnter the String in tree('no' for no node):");
    scanf(" %s",&data);
    newnode->left = 0;
    newnode->right= 0;
    if(strcmp(data,"no") == 0){
        return 0;
    }
    strcpy(newnode->data,data);
    printf("\nEnter the left child of  %s: ",data);
    newnode->left = createTree();
    printf("\nEnter the Right child of  %s: ",data);
    newnode->right = createTree();
    return newnode;
} 
void preOrder(node *root){
    if(root == 0){
        return;
    }
    printf(" %s ",root->data);
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
    printf(" %s ",root->data);
}
void inOrder(node* root,node* temp){
    if(root == 0){
        return;
    }
    temp = root;
    inOrder(root->left,temp);
    printf(" %s ",root->data);
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

