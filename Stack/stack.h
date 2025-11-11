#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX_STACK_SIZE 5
#define stack_ok 1
#define stack_null_ptr 0




typedef struct {
    int items[MAX_STACK_SIZE];
    int top;
} Stack;


int init_Stack(Stack *stk);
int Full_Stack(Stack *stk);
int Empty_Stack(Stack *stk);
int push_Stack(Stack *stk, int item);
int pop_Stack(Stack *stk, int *item);  
int top_Stack(Stack *stk, int *item); 
void display_Stack(Stack *stk);
#endif /* STACK_H */