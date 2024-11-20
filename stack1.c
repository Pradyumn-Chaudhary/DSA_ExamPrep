#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int item;
    struct Node *next;
}Node;

Node *top = NULL;

void pop(){
if(top==NULL){
    printf("Stack Underflow\n");
    return;
}
Node *curr = top;
printf("%d\n", top->item);
top = top->next;
free(curr);
}

void push(int x){
    struct Node *curr = (Node*)malloc(sizeof(Node));
    curr->item = x;
    curr->next = top;
    top = curr;
}

void peek(){
    if(top!=NULL){
    printf("%d\n", top->item);
    }else{
        printf("Stack Underflow\n");
    }
}

void traverse(){
    if(top!=NULL){
    struct Node *curr = top;
    while(curr != NULL){
        printf("%d\n",curr->item);
        curr = curr->next;
    }
    }else{
        printf("Stack Underflow\n");
    }
}

int main(){
    int x,choice;
    while(1){
        printf("Press 1 for Pop\nPress 2 for Push\nPress 3 for Peek\nPress 4 for traverse\nPress any other key for exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                pop();
                break;
            case 2:
                printf("Enter element to push\n");
                scanf("%d", &x);
                push(x);
                break;
            case 3:
                peek();
                break;
            case 4:
                traverse();
                break;
            default:
                printf("exited");
                return 0;
        }
    }
    return 0;
}