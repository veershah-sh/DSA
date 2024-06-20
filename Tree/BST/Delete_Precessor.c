/*
Ex. using Inorder precessor   60       Delete 60      50
                            /    \                  /    \
                          10      80      ->      10      80
                        /  \     /  \            /       /   \
                       9    50  70   90        9        70    90
*/


#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}node;
node *temp;
node *createTree(){
    int data;
    printf("\nEnter the data in Node (-1 for no node):");
    scanf("%d",&data);
    if(data == -1){
        return 0;
    }
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->left = 0;
    newnode->right = 0;
    printf("\nEnter left child  of %d  :",data);
    newnode->left = createTree();
    printf("\nEnter Right child of  %d  :",data);
    newnode->right = createTree();
    return newnode;
}
void preOrder(node *root){
    if(root == 0){
        return;
    }
    printf(" %d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
node *deletePrecessor(node *root){
    int key;
    if(root == 0){
        return 0;
    }
    printf("\nEnter data(key) to be deleted :");
    scanf("%d",&key);
    // if key is less then  root node then go to left side 
    if(key < root->data){
        root->left = deletePrecessor(root);
        return NULL ;
    }
    // if key is less then  root node then go to left side
    else if(key > root->data){
        root->right = deletePrecessor(root);
        return NULL;
    }
    // Delete Node that have Zero or one child node 
    /*
     check if root->left means left child node of root node  if it is Empty then
     go to root -> right means right child of root node
    */ 
   if(root->left == NULL){
      temp =  root->right;
      free(root);
      return temp;
   }
    /*
     check if root->right means right child node of root node  if it is Empty then
     go to root->left  means left child of root node
    */ 
   else if(root->right == NULL){
     temp = root->left;
     free(root);
     return temp; 
   }
   // Delete  Node that have two child 
   node * precessor = root;
   node * presChild = root->left;
   // Because in precessor Method we become root node which is largest value in left subtree
    while(presChild ->right!=NULL){
    precessor = presChild;
    presChild = presChild->right;
    }
    // replace largest element of left side which is deleted
    root->data = presChild -> data;
    if(precessor->right == presChild ){ // if any left child element of child node then place it into right side
        precessor->right = presChild->left; 
    }
    else{
        precessor->right = presChild->right; 
    }
    free(presChild);
    return root;
}
void main(){
    node* root = createTree();
    printf("\nThis is Tree Traversals\n");
    printf("\n1. PREORDER\n");
    preOrder(root);
    node *newRoot = deletePrecessor(root);
    printf("\n After DELETION\n");
    preOrder(newRoot);
}