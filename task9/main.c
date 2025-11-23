#include "array.h"
#include <stdio.h>

#include"array.h"

int main() {

    ArrayStatus ret;
    int n ;
    int x;

    Array arr= {.array = (int*)malloc(10 * sizeof(int)) ,
        .capacity = 10,
        .size = 0
    };
    
    if (arr.array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    ret = add(&arr, 5);
    ret = add(&arr, 2);
    ret = add(&arr, 1);
    ret = add(&arr, 8);
    ret = add(&arr, 9);
    ret = add(&arr, 3);
    ret = set(&arr, 5, 7);
    //ret = delete_ele(&arr, 5);
    //printf("%d\n", ret);
    //ret = display(&arr);
    //ret = search(&arr , 5, &n);
    //printf("%d\n",n);
    //ret = get(&arr , 5 , &x);
    //printf("%d\n",x);
    //printf("%d\n", ret);
    //ret = sort(&arr);
    ret = display(&arr);
    printf("\n");
   // ret = revers(&arr);
    ret= shift_left(&arr , 2);
    ret = display(&arr);
    free(arr.array);
    return 0;
}