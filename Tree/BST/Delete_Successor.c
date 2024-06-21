/*
There are three cases for Deletion 
1. 0 - child
2. 1 - Child
3. 2 - child 
   (i) Inorder precessor -  If we Delete 2 child Node then largest Node from Left subtree 
                            replace that position  which we delete 
  (ii) Inorder Successor -  If we Delete 2 child Node then Smallest Node from Right subtree 
                            replace that position  which we delete 

Ex. using Inorder Successor   60       Delete 60      70
                            /    \                  /    \
                          10      80      ->      10       80
                        /  \     /  \            /   \       \
                       9    50  70   90        9      50      90
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node;
node * temp;
node* createTree(){
    int data;
    printf("\nEnter the data in Tree (-1 for no node):");
    scanf("%d",&data);
    if(data == -1){
        return 0;
    }
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->left = 0;
    newnode->right = 0;
    printf("\nEnter left child of %d :\n",data);
    newnode->left = createTree();
    printf("\nEnter Right child of %d :\n",data);
    newnode->right = createTree();

    return newnode;
}
node *delete(node* root){
    int data;
    if(root == 0){
        return NULL;
    }
    printf("\nEnter the data in Tree to be deleted : ");
    scanf("%d",&data);
    if(data < root->data){
       root->left =  delete(root->left);
       return NULL;
    }
    else if (data > root->data){
        root->right = delete(root->right);
        return NULL;
    }
    //Delete node with one child or zero child
    if(root->left == NULL){
        temp = root->right;
        free(root);
        return temp;
    }
    else if (root->right == NULL ){
        temp = root->left;
        free(root);
        return temp;
    }
    // delete two child
    node * succparent = root; // for root Node 
    node * succchild = root->right; // for right child 
    while(succchild->left!=NULL){
        succparent = succchild;
        succchild = succchild->left;
    }
    root->data = succchild->data;
    if(succparent->left == succchild){
        succparent->left = succchild->right;
    }
    else{
        succparent->right = succchild->right;
    }
    free(succchild);
    return root;

}
void preOrder(node* root){
    if(root == 0){
        return ;
    }
    printf(" %d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void main(){
 node* root = createTree();
    printf("\nThis is Tree Traversals\n");
    printf("\n1. PREORDER\n");
    preOrder(root);
    node *newRoot = delete(root);
    printf("\nDELETION\n");
    preOrder(newRoot);

}
