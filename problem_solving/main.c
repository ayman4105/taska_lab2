#include <stdio.h>
#include <string.h>

#define error_state -1
#define success_state 0
#define max_size 10

int ret = error_state;

int decimal_to_binary(int number);
int count_ones_zeros(unsigned int num, int *ones, int *zeros);
int count_occurrences(int *arr, int size, int num, int *count);
int reverse_string(char *str);

int main() {
/*
    int number;
    printf("Enter a decimal number: ");
    scanf("%d", &number);
*/

    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);

     int status = reverse_string(str);

    if (status == success_state) {
        printf("Reversed string: %s\n", str);
    } else {
        printf("Error: NULL pointer received.\n");
    }



    /*
    int arr[] = {1, 3, 7, 3, 5, 3, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result_count;

    ret = count_occurrences(arr, size, number, &result_count);
    if (ret == success_state) {
        printf("The number %d occurs %d times in the array.\n", number, result_count);
    } else {
        printf("Error counting occurrences.\n");
    }

*/

/*
    int ones = 0;
    int zeros = 0;

    ret = count_ones_zeros(number, &ones, &zeros);
        printf("Number of 1's: %d\n", ones);
        printf("Number of 0's: %d\n", zeros);
    

    //ret =  decimal_to_binary(number);
*/
    return 0;
}





int reverse_string(char *str) {
    if (str == NULL) {
        ret = error_state;
    } else {
        int start = 0;
        int end = strlen(str) - 1;

        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }

        ret = success_state;
    }

    return ret;
}



int count_occurrences(int *arr, int size, int num, int *count) {
    if (arr == NULL || count == NULL || size <= 0) {
        ret = error_state;
    } else {
        *count = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] == num) {
                (*count)++;
            }
        }
        ret = success_state;
    }
    return ret;
}




int count_ones_zeros(unsigned int num, int *ones, int *zeros) {
    if(ones == NULL || zeros == NULL) {
        ret = error_state;
    }
    else {
        *ones = 0;
        *zeros = 0;
        unsigned int n = num;
        for (int i = 0; i < max_size; i++) {
        if (n & 1){
            (*ones)++;
        }   
        else{
            (*zeros)++;
        }
        n = n >> 1;
    }
        ret = success_state;
    }
    return ret;
}







int decimal_to_binary(int number) {

    if (number < 0) {
        return ret;
    }
    else {
    printf("Binary: ");
    int bin[32]; 
    int i = 0;

    while (number > 0) {
        bin[i] = number % 2; 
        number = number / 2;      
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
        ret = success_state;
    } 
    return ret;
    printf("\n");
}


