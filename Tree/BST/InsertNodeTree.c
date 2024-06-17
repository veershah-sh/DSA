/*
Insertion in Binary Tree:
Initialy We have Root Node 45 :
Inserting Nodes are 53,89,19,23,100,73,69
Perform Preorder,InOrder,PostOrder Traversals
Preorder: 45,19,23,53,89,73,69,100
Inorder: 19,23,45,53,69,73,89,100
Postorder:23,19,69,73,100,89,53,45
*/

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* left;
    struct node* right;

}node;
node* createNode(int data){
    if(data == -1){
        return 0;
    }
    node *newnode = (node*)malloc(sizeof(node));
    newnode->left = 0;
    newnode->right = 0;
    newnode->data = data;
    return newnode;
}
node* insertNode(node* root,int data){
    if(root == 0){
        return createNode(data);
    }
    else if(data<root->data){
        root->left = insertNode(root->left,data);
    }
    else if(data>root->data){
        root->right = insertNode(root->right,data);
    }
    return root;
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
void preOrder(node* root){
    if(root == 0){
        return ;
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
void main(){
    node * root = createNode(45);
    printf("\nBefore Inserting Node in Tree\n");
    printf("\n1. PREORDER\n");
    preOrder(root); 
    printf("\nNow Insert new node in Tree\n");
    insertNode(root,53);
    insertNode(root,89);
    insertNode(root,19);
    insertNode(root,23);
    insertNode(root,100);
    insertNode(root,73);
    insertNode(root,69);
    printf("\nAfter Inserting New Node in Tree\n");
    printf("\n1. INORDER\n");
    inOrder(root,root);
    printf("\n2. PREORDER\n");
    preOrder(root);
    printf("\n3. POSTORDER\n");
    postOrder(root,root);
}