#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* array;
    int size;
    int capacity;
} Array;

typedef enum {
    SUCCESS,
    ERROR_OUT_OF_BOUNDS,
    ERROR_ALLOCATION_FAILED,
    NULL_ERROR,
    EMPTY_ARRAY,
    FULL_ARRAY
} ArrayStatus;

ArrayStatus display(const Array* arr);
ArrayStatus add(Array* arr, int value);
ArrayStatus insert(Array* arr, int index, int value);
ArrayStatus delete_ele(Array* arr, int index);
ArrayStatus search(const Array* arr, int value, int* index);
ArrayStatus get(const Array* arr, int index, int* value);
ArrayStatus set(Array* arr, int index, int value);
ArrayStatus append(Array *arr, int val);
ArrayStatus pop(Array *arr);
ArrayStatus sort(Array *arr);
ArrayStatus get_size(Array *arr);
ArrayStatus arr_max(Array *arr);
ArrayStatus arr_min(Array *arr);
ArrayStatus arr_sum(Array *arr);
int get_capacity(Array *arr);










#endif