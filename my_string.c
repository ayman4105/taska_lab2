#include"my_string.h"

int my_strlen(const char *str) {
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}


void my_strcpy(char *dest, const char *src) {
    int i = 0;
    while ((dest[i] = src[i]) != '\0') {
       i++;
    }
}


int my_strcmp(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] && (s1[i] == s2[i])){
        i++;
    }
    return s1[i] - s2[i];
}

void my_strcat(char *dest, const char *src) {
    int i = 0;
    int j = 0;
    while (dest[i] != '\0'){
        i++;
    }
    while ((dest[i++] = src[j++]) != '\0');
}

char* my_strchr(const char *str, char ch) {
    while (*str) {
        if (*str == ch){
            return (char*)str;
        }

        str++;
    }
    return 0;
}






