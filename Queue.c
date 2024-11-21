#include<stdio.h>
int front = -1, rear = -1;
int Queue[5];

void pop(){
if(front == -1){
    printf("Stack Underflow\n");
    return;
}
printf("%d\n", Queue[front]);
if(front == rear){
    front = -1;
    rear = -1;
}else{
    front = (front + 1) % 5;
}
}

void push(int x){
if((rear+1)%5==front){
    printf("Stack Overflow\n");
}else if(front == -1 && rear == -1){
    front++;
    rear++;
    Queue[rear] = x;
    }else{
    rear = (rear + 1) % 5;
    Queue[rear] = x;
}
}

void peek(){
    if(front == -1 && rear == -1){
        printf("Stack Empty\n");
        return;
    }
    printf("%d\n", Queue[front]);
}

void traverse(){
if(front == -1 && rear == -1){
    printf("Stack Empty\n");
    return;
}
int temp = front;
while(temp != rear){
    printf("%d\n", Queue[temp]);
    temp = (temp + 1) % 5;
}
printf("%d\n", Queue[temp]);
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