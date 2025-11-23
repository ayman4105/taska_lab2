#include "array.h"




ArrayStatus display(const Array* arr) {
    ArrayStatus status ;
    if (arr == NULL) {
        status = NULL_ERROR;
    }
    else if (arr->size == 0) {
        status = EMPTY_ARRAY;
    }
    else  {
        status = SUCCESS;
        for (int i = 0; i < arr->size; i++) {
            printf("%d\n", arr->array[i]);
        }
    }
    return status;
}

ArrayStatus add(Array* arr, int value) {
    ArrayStatus status;
    if (arr == NULL) {
        status = NULL_ERROR;
    }
    else if ((arr->size) >= (arr->capacity)) {
        status = FULL_ARRAY;
    }
    else {
        arr->array[arr->size] = value;
        arr->size++;
        status = SUCCESS;
    }
    return status;
}

ArrayStatus insert(Array* arr, int index, int value) {
    ArrayStatus status;
    if (arr == NULL) {
        status = NULL_ERROR;
    }
    else if ((arr->size) >= (arr->capacity)) {
        status = FULL_ARRAY;
    }
    else if ((index < 0) || (index > arr->size)) {
        status = ERROR_OUT_OF_BOUNDS;
    }
    else {
        for (int i = arr->size; i > index; i--) {
            arr->array[i] = arr->array[i - 1];
        }
        arr->array[index] = value;
        arr->size++;
        status = SUCCESS;
    }
    return status;
}

ArrayStatus delete_ele(Array* arr, int index) {
    ArrayStatus status;
    if (arr == NULL) {
        status = NULL_ERROR;
    }
    else if (arr->size == 0) {
        status = EMPTY_ARRAY;
    }
    else if ((index < 0) || (index >= arr->size)) {
        status = ERROR_OUT_OF_BOUNDS;
    }
    else {
        for (int i = index; i < arr->size - 1; i++) {
            arr->array[i] = arr->array[i + 1];
        }
        arr->size--;
        status = SUCCESS;
    }
    return status;
}

ArrayStatus search(const Array* arr, int value, int* index) {
    ArrayStatus status;
    if ((arr == NULL) || (index == NULL)) {
        status = NULL_ERROR;
    }
    else if (arr->size == 0) {
        status = EMPTY_ARRAY;
    }
    else {
        for (int i = 0; i < arr->size; i++) {
            if (arr->array[i] == value) {
                *index = i;
                status = SUCCESS;
                break;
            }
        }
    }
    return status;
}


ArrayStatus get(const Array* arr, int index, int* value){
    ArrayStatus status;
    if ((arr == NULL) || (value == NULL)) {
        status = NULL_ERROR;
    }
    else if (arr->size == 0) {
        status = EMPTY_ARRAY;
    }
    else if ((index < 0) || (index > arr->size)) {
        status = ERROR_OUT_OF_BOUNDS;
    }
    else {
        for (int i = 0; i < arr->size; i++) {
           *value = arr->array[index];
            status = SUCCESS;
                break;
            }
    }
    return status;
}

ArrayStatus set(Array *arr, int index, int val){
    ArrayStatus status;
    if (arr == NULL)
    {
        status = NULL_ERROR;
    }
    else if (arr->capacity < (arr->size+1))
    {
        status = FULL_ARRAY;
    }
    else
    {
        arr->array[index] = val;
        status = SUCCESS;
    }
    return status;
}

ArrayStatus append(Array *arr, int val){
    ArrayStatus status;
    if (arr == NULL)
    {
        status = NULL_ERROR;
    }
    else if (arr->capacity < (arr->size+1))
    {
        status = FULL_ARRAY;
    }
    else {
        arr->array[arr->size] = val;
        arr->size += 1;
        status = SUCCESS;
    }
    return status;
}

ArrayStatus pop(Array *arr){
    ArrayStatus status;
    if (arr == NULL)
    {
        status = NULL_ERROR;
    }
    else {
        arr->size -= 1;
        status = SUCCESS;
    }
    return status;    
}

ArrayStatus sort(Array *arr){
    ArrayStatus status;
    if (arr == NULL)
    {
        status = NULL_ERROR;
    }
    else if (arr->size == 0) {
        status = EMPTY_ARRAY;
    }
    else if (arr->size <= 1){
        return -1;
    }
    else{
    for (int i = 0; i < arr->size - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < arr->size - 1 - i; j++)
        {
            if (arr->array[j] > arr->array[j + 1])
            {
                int tmp = arr->array[j];
                arr->array[j] = arr->array[j + 1];
                arr->array[j + 1] = tmp;
                swapped = 1;
            }
        }
        if (!swapped)
            break; // array already sorted
    }
        status = SUCCESS;
    }
    return status;
}

ArrayStatus get_size(Array *arr){
    ArrayStatus status;
    if (arr == NULL)
    {
        status = NULL_ERROR;
    }
    else
    {

        status = SUCCESS;
        int size =  arr->size;
    }
    return status;
}

ArrayStatus arr_max(Array *arr){
    ArrayStatus status;
    if (arr == NULL)
    {
        status = NULL_ERROR;
    }
    else if (arr->size == 0) {
        status = EMPTY_ARRAY;
    }
    else
    {
        int max = arr->array[0];
    for (int i = 0; i < arr->size; i++)
    {
        if (arr->array[i] > max)
        {
            max = arr->array[i];
        }
        
    }
    status = SUCCESS;
    }
    return status;
}


ArrayStatus arr_min(Array *arr){
    ArrayStatus status;
    if (arr == NULL)
    {
        status = NULL_ERROR;
    }
    else if (arr->size == 0) {
        status = EMPTY_ARRAY;
    }
    else
    {
        int min = arr->array[0];
    for (int i = 0; i < arr->size; i++)
    {
        if (arr->array[i] < min)
        {
            min = arr->array[i];
        }
        
    }
    status = SUCCESS;
    }
    return status;
}


ArrayStatus arr_sum(Array *arr){
    ArrayStatus status;
    if (arr == NULL)
    {
        status = NULL_ERROR;
    }
    else if (arr->size == 0) {
        status = EMPTY_ARRAY;
    }
    else
    {
        int sum = 0;
    for (int i = 0; i < arr->size; i++)
    {
        sum += arr->array[i];
    }
    status = SUCCESS;
    }
    
    return status;
}


int get_capacity(Array *arr){
    return arr->capacity;
}


ArrayStatus revers(Array *arr){
    ArrayStatus status;
    if (arr == NULL)
    {
        status = NULL_ERROR;
    }
    else if (arr->size == 0) {
        status = EMPTY_ARRAY;
    }
    else
    {
        for(int i =0; i<(arr->capacity)/2 ; i++){
            int temp = arr->array[i];
            arr->array[i] = arr->array[arr->capacity - i - 1];
            arr->array[arr->capacity - i - 1] = temp;
        }
    }


}

