#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
    int *data;
    int top;
    int capacity;
} Stack;

void reinitStack(Stack *stack){
    stack->capacity = 2 * stack->capacity;
    stack->data = (int *)realloc(stack->data,sizeof(int) * stack->capacity);
}

void pop(Stack *stack){
if(stack->top==-1){
    printf("Stack Underflow\n");
    return;
}
printf("%d\n", stack->data[stack->top--]);
}

void push(Stack *stack,int x){
    if(stack->top == stack->capacity-1){
        reinitStack(stack);
    }
    stack->data[++stack->top] = x;
}

void peek(Stack *stack){
    if(stack->top==-1){
        printf("Stack Empty\n");
        return;
    }
    printf("%d\n", stack->data[stack->top]);
}

void traverse(Stack *stack){
    if(stack->top == -1){
        printf("Stack Empty\n");
        return;
    }
    for (int i = stack->top; i >= 0;i--){
        printf("%d\n", stack->data[i]);
    }
}

int main(){
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->capacity = 5;
    stack->data = (int *)malloc(sizeof(int) * stack->capacity);
    stack->top = -1;
    int choice;
    int x;
    while (1) {
        printf("\n--- Stack Operations Menu ---\n");
        printf("Press 1 for Pop\nPress 2 for Push\nPress 3 for Peek\nPress 4 for Traverse\nPress any other key to Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                pop(stack);
                break;
            case 2:
                printf("Enter character to push: ");
                scanf(" %d", &x);
                push(stack, x);
                break;
            case 3:
                peek(stack);
                break;
            case 4:
                traverse(stack);
                break;
            default:
                printf("Exited\n");
                free(stack->data); // Free dynamically allocated memory
                free(stack);
                return 0;
        }
    }
    return 0;
}