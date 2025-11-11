#include "stack.h"

int init_Stack(Stack *stk) {
    int status;
    if (stk == NULL) {
        status = stack_null_ptr;
    }
    else {
        stk->top = -1;
        status = stack_ok;
    }
    return status;
}

int Full_Stack(Stack *stk) {
   int status;
    if (stk == NULL) {
        status = stack_null_ptr;
    }
    else {
        stk->top == MAX_STACK_SIZE - 1;
        printf("Stack is full\n");
        status = stack_ok;
    }
    return status;
}

int Empty_Stack(Stack *stk) {
    int status;
    if (stk == NULL) {
        status = stack_null_ptr;
    }
    else {
        stk->top == -1;
        printf("Stack is empty\n");
        status = stack_ok;
    }
    return status;
}

int push_Stack(Stack *stk, int item) {
    int status;
    if (stk == NULL) {
        status = stack_null_ptr;
    }
    else if (stk->top == MAX_STACK_SIZE - 1) {
            printf("Stack overflow\n");
            status = stack_ok;
        }
        
        else {
            stk->items[++(stk->top)] = item;
            printf("Pushed %d to stack\n", item);
            status = stack_ok;
        }
    return status;
}

int pop_Stack(Stack *stk, int *item) {
    int status;
    if (stk == NULL) {
        status = stack_null_ptr;
    }
    else if (stk->top == -1) {
            printf("Stack underflow\n");
            status = stack_ok;
        }
        
        else {
            *item = stk->items[(stk->top)--];
            printf("Popped %d from stack\n", *item);
            status = stack_ok;
        }
    return status;
}

int top_Stack(Stack *stk, int *item) {
    int status;
    if (stk == NULL) {
        status = stack_null_ptr;
    }
    else if (stk->top == -1) {
            printf("Stack is empty\n");
            status = stack_ok;
        }
        
        else {
            *item = stk->items[stk->top];
            printf("Top element is %d\n", *item);
            status = stack_ok;
        }
    return status;
}

void display_Stack(Stack *stk) {
    if (stk == NULL) {
        printf("Stack is null\n");
    }
    else if (stk->top == -1) {
            printf("Stack is empty\n");
        }
        
        else {
            printf("Stack elements: ");
            for (int i = stk->top; i >= 0; i--) {
                printf("%d ", stk->items[i]);
            }
            printf("\n");
        }
}


    

