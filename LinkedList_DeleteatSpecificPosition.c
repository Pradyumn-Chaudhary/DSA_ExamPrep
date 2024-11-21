#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

void add(int x);
void traverse();
void delete(int position);

int main(){
    int n = 5;
    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    traverse();
    delete(1);
    traverse();
    return 0;
}

void delete(int position){
if(head==NULL){
    return;
}
Node *temp = head;
if(position==1){
    head = head->next;
    free(temp);
    return;
}
for (int i = 1; i < position - 1 && temp!=NULL;i++){
    temp = temp->next;
}
if(temp == NULL || temp->next == NULL){
    printf("Position out of bound\n");
    return;
}
Node *nodeToDelete = temp->next;
temp->next = nodeToDelete->next;
free(nodeToDelete);
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