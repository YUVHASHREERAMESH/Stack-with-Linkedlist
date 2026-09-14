#include "header.h"

bool isEmpty(Node**obj){
    return *obj==NULL;
}

Node*createStack(int data){
    Node*top=(Node*)malloc(sizeof(Node));
    if(top==NULL){
        printf("\nMemory allcoation failed\n");
        return NULL;
    }
    top->data=data;
    top->prev=NULL;
    top->next=NULL;
    // top=&newNode;
    printf("\nData added to the Stack\n");
    return top;
}

void push(Node**top,int data){
    Node*newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("\nMemory allcoation failed\n");
        return;
    }
    newNode->data=data;
    newNode->prev=NULL;
    if(*top){
        (*top)->prev=newNode;
    }
    newNode->next=(*top);
    *top=newNode;
    printf("\nData added to the Stack\n");
}

void pop(Node**top){
    if(isEmpty(top)){
        printf("\nStack is empty\n");
        return;
    }
    printf("\n%d is the top most element in the stack\n",(*top)->data);
    Node*temp=(*top);
    if(*top){
        (*top)->prev=NULL;
    }
    (*top)=(*top)->next;
    free(temp);
}

void peek(Node**top){
    if(isEmpty(top)){
        printf("\nStack is empty\n");
        return;
    }
    printf("\n%d is the Top most element",(*top)->data);
    return;
}

void displayStack(Node**top){
    Node*temp=(*top);
    while(temp){
        printf("\n%d\n",temp->data);
        temp=temp->next;
    }
    return;
}

void deleteStack(Node**top){ 
    while(*top){
        Node*temp=(*top);
        (*top)=(*top)->next;
        free(temp);
    }
    *top=NULL;
    printf("\nMemory of Stack cleared succesfully\n");
}