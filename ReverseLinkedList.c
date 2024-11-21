#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

void add(int x);
void traverse();
void reverse();

int main(){
    int n = 5;
    add(5);
    add(4);
    add(3);
    add(2);
    add(1);
    traverse();
    reverse();
    traverse();
    return 0;
}

void reverse(){
if(head == NULL || head->next == NULL){
    return;
}
Node *prevNode = NULL;
Node *currNode = head;
while(currNode!=NULL){
    Node *nextNode = currNode->next;
    currNode->next = prevNode;
    prevNode = currNode;
    currNode = nextNode;
}
head = prevNode;
}

void add(int x){
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