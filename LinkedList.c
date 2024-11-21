#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

void addFirst(int x){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}

void addLast(int x){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *currNode = head;
    while(currNode->next!=NULL){
        currNode = currNode->next;
    }
    currNode->next = newNode;
}

void removeFirst(){
    if(head == NULL){
        printf("List Empty\n");
        return;
    }
    Node *temp = head;
    printf("%d", head->data);
    head = head->next;
    free(temp);
}

void removeLast(){
if(head==NULL){
    printf("List Empty\n");
    return;
}
if(head->next==NULL){
    Node *temp = head;
    head = NULL;
    free(temp);
    return;
}
Node *secondLast = head;
Node *Last = head->next;
while(Last->next!=NULL){
    secondLast = secondLast->next;
    Last = Last->next;
}
secondLast->next = NULL;
printf("%d\n", Last->data);
free(Last);
}

void traverse(){
if(head==NULL){
    printf("List Empty\n");
    return;
}
Node *currNode = head;
while(currNode != NULL){
    printf("%d -> ", currNode->data);
    currNode = currNode->next;
}
printf("NULL\n");
}

int main(){
    int x, choice;
    while(1){
        printf("\nPress 1 for Add First\nPress 2 for Add Last\nPress 3 for Remove First\nPress 4 for Remove Last\nPress 5 for Traverse\nPress any other key to Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter element to add at the beginning: ");
                scanf("%d", &x);
                addFirst(x);
                break;
            case 2:
                printf("Enter element to add at the end: ");
                scanf("%d", &x);
                addLast(x);
                break;
            case 3:
                printf("Removing the first element: ");
                removeFirst();
                printf("\n");
                break;
            case 4:
                printf("Removing the last element: ");
                removeLast();
                printf("\n");
                break;
            case 5:
                printf("Traversing the list: ");
                traverse();
                break;
            default:
                printf("Exited\n");
                return 0;
        }
    }
    return 0;
}
