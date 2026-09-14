#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node*prev;
    struct node*next;
}Node;

bool isEmpty(Node**);
Node*createStack(int);
void push(Node**,int);
void pop(Node**);
void peek(Node**);
void displayStack(Node**);
void deleteStack(Node**);




#endif