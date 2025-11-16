#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
#define MAX_VALUE 100

int count_digits(int number , int *digit_count);
int count_digits_for(int number , int *digit_count);
int count_digits_rec(int number , int *digit_count);
int sum_unique(int arr[], int size);

int main() {

    int arr[SIZE] = {10, 20, 30,10, 40,10, 50,20,10,50};
    int sum = sum_unique(arr, SIZE);
    printf("Sum of unique elements: %d\n", sum);
    

    /*
    int nums_digits = 0;
    int ret = count_digits_rec(12010, &nums_digits);
    printf("Number of digits: %d\n", nums_digits);
    printf("Return code: %d\n", ret);
    */

    /*
    int nums_digits = 0;
    int ret = count_digits_for(125550, &nums_digits);
    printf("Number of digits: %d\n", nums_digits);
    printf("Return code: %d\n", ret);
    */
    

    /*
    int nums_digits = 0;
    int ret = count_digits(1250, &nums_digits);
    printf("Number of digits: %d\n", nums_digits);
    printf("Return code: %d\n", ret);
    */

    /*
    int arr[SIZE] = {10, 20, 30,10, 40,10, 50,20,40,50};
    int frequency[MAX_VALUE] = {0};
    // Count frequency of each element
    for(int i = 0; i < SIZE; i++) {
        frequency[arr[i]]++;
    }   
    //print unique elements
    printf("Unique elements in the array are:");
    for(int i = 0; i < SIZE; i++) {
        if(frequency[arr[i]] == 1) {
            printf("%d ", arr[i]);
        }
    }
*/

    return 0;
}

int count_digits(int number , int *digit_count) {
    if(number < 0) {
        return -1; 
    }
    else if (number == 0) {
        digit_count[0] = 1;
        return 0; 
    }
    while (number > 0)
    {
        (*digit_count)++;
        number = number / 10;
    }
    
    return 0; 
}  

int count_digits_for(int number , int *digit_count) {
    if(number < 0) {
        return -1; 
    }
    else if (number == 0) {
        digit_count[0] = 1;
        return 0; 
    }
    for(; number > 0; number = number / 10) {
        (*digit_count)++;
    }
    
    return 0; 
}


int count_digits_rec(int number , int *digit_count) {
    if(number < 0) {
        return -1; 
    }
    else if (number == 0) {
        if(*digit_count == 0) {
            *digit_count = 1; 
        }
        return 0; 
    }
    else {
        (*digit_count)++;
        return count_digits_rec(number / 10, digit_count);
    }
}

int sum_unique(int arr[], int size) {
    int frequency[MAX_VALUE] = {0};
    int sum = 0;

    for(int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }   

    for(int i = 0; i < size; i++) {
        if(frequency[arr[i]] == 1) {
            sum += arr[i];
        }
    }

    return sum;
}

