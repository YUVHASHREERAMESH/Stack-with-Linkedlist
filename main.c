#include "header.h"
int main(){
    Node*stack=createStack(5);
    push(&stack,6);
    push(&stack,7);
    displayStack(&stack);
    pop(&stack);
    pop(&stack);
    peek(&stack);
    displayStack(&stack);
    deleteStack(&stack);
    return 0;
}