#include <stdio.h>
#include "stack.h"


int main(){

    Stack myStack;

    int status;
    int item;

    status = init_Stack(&myStack);

    status = push_Stack(&myStack, 10);
    status = push_Stack(&myStack, 20);
    status = push_Stack(&myStack, 30);
    status = push_Stack(&myStack, 40);
    status = push_Stack(&myStack, 50);
    status = push_Stack(&myStack, 60);

    status = pop_Stack(&myStack, &item);
    status = pop_Stack(&myStack, &item);
    status = pop_Stack(&myStack, &item);
    status = pop_Stack(&myStack, &item);

    status = top_Stack(&myStack, &item);
    

    display_Stack(&myStack);

    return 0;
}