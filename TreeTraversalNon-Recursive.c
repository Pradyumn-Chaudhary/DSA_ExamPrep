#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

// Stack structure
typedef struct Stack {
    Node *info;
    struct Stack *next;
} Stack;

// Stack operations
void push(Stack **stack, Node *node) {
    Stack *curr = (Stack *)malloc(sizeof(Stack));
    curr->info = node;
    curr->next = *stack;
    *stack = curr;
}

Node *pop(Stack **stack) {
    if (*stack == NULL) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    Stack *temp = *stack;
    Node *node = temp->info;
    *stack = temp->next;
    free(temp);
    return node;
}

Node *peek(Stack *stack) {
    if (stack == NULL) {
        printf("Stack is empty\n");
        exit(EXIT_FAILURE);
    }
    return stack->info;
}

// Binary Tree Insertion
Node *insert(int i, Node *root) {
    if (root == NULL) {
        root = (Node *)malloc(sizeof(Node));
        root->data = i;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    if (i > root->data) {
        root->right = insert(i, root->right);
    } else {
        root->left = insert(i, root->left);
    }
    return root;
}

// Non-Recursive Traversals
void PREorder(Node *root) {
    Stack *stack = NULL;
    push(&stack, root);
    while (stack != NULL) {
        Node *curr = pop(&stack);
        printf("%d ", curr->data);
        if (curr->right) push(&stack, curr->right);
        if (curr->left) push(&stack, curr->left);
    }
}

void INorder(Node *root) {
    Stack *stack = NULL;
    Node *curr = root;
    while (curr != NULL || stack != NULL) {
        while (curr != NULL) {
            push(&stack, curr);
            curr = curr->left;
        }
        curr = pop(&stack);
        printf("%d ", curr->data);
        curr = curr->right;
    }
}

void POSTorder(Node *root) {
    Stack *stack1 = NULL, *stack2 = NULL;
    if (root == NULL) return;
    push(&stack1, root);
    while (stack1 != NULL) {
        Node *curr = pop(&stack1);
        push(&stack2, curr);
        if (curr->left) push(&stack1, curr->left);
        if (curr->right) push(&stack1, curr->right);
    }
    while (stack2 != NULL) {
        Node *curr = pop(&stack2);
        printf("%d ", curr->data);
    }
}

// Main Function
int main() {
    int arr[] = {5, 8, 4, 2, 1, 3, 6, 9, 7};
    Node *root = NULL;
    for (int i = 0; i < 9; i++) {
        root = insert(arr[i], root);
    }

    printf("Non-Recursive PreOrder: ");
    PREorder(root);
    printf("\nNon-Recursive InOrder: ");
    INorder(root);
    printf("\nNon-Recursive PostOrder: ");
    POSTorder(root);

    return 0;
}
