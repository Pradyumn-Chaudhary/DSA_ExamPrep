#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right;
} Node;


Node* insert(int i,Node *root){
    if (root == NULL)
    {
        root = (Node *)malloc(sizeof(Node));
        root->data = i;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    if(i>root->data){
        root->right = insert(i, root->right);
    }else{
        root->left = insert(i, root->left);
    }
    return root;
}

void inOrder(Node *root){
if(root==NULL){
    return;
}
inOrder(root->left);
printf("%d ", root->data);
inOrder(root->right);
}

void preOrder(Node *root){
    if(root==NULL){
        return;
    }
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

int main(){
    int arr[] = {5, 8, 4, 2, 1, 3, 6, 9, 7};
    Node *root = NULL;
    for (int i = 0; i < 9;i++){
        root = insert(arr[i], root);
    }
    printf("PreOrder:");
    preOrder(root);
    printf("\nInOrder:");
    inOrder(root);
    printf("\nPostOrder:");
    postOrder(root);
}