#include <stdio.h>
#include <stdlib.h>
#include"my_string.h"

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    char target = 'h';

    printf("Length: %d\n", my_strlen(str1));


    my_strcat(str1, str2);
    printf("Concat: %s\n", str1);

    my_strcpy(str1, str2);
    printf("after copy str1 is: %s\n", str1);

    printf("compare result is: %d\n", my_strcmp(str1, str2));

    char *result = my_strchr(str1, target);
    if (result){
        printf("character '%c' found at position: %ld\n", target, result - str1);
    }

    else{
        printf("character '%c' not found\n", target);
    }


    return 0;
}

