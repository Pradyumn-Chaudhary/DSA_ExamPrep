#include<stdio.h>
int top = -1;
int stack[5];

void pop(){
if(top==-1){
    printf("Stack Underflow\n");
    return;
}
printf("%d\n", stack[top--]);
}

void push(int x){
    if(top==4){
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
}

void peek(){
    if(top!=-1){
        printf("%d",stack[top]);
    }else{
        printf("Stack Underflow\n");
    }
}

void traverse(){
    if(top==-1){
        printf("Stack Underflow\n");
    }else{
        for (int i = top; i >= 0;i--){
            printf("%d\n", stack[i]);
        }
    }
}

int main(){
    int x,choice;
    while(1){
        printf("Press 1 for Pop\nPress 2 for Push\nPress 3 for top\nPress 4 for traverse\nPress any other key for exit\n");
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