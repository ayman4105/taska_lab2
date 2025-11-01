#include <stdio.h>
#include <stdlib.h>

int main()
{
    /****************************************************
        int num;
        int i;
        printf("please enter the numbers of arrays ");
        scanf("%d",&num);
        int arr[num];
        printf("enter %d numbers \n",num);
        for(i = 0 ; i < num ; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("numbers reverse \n");
        for(i = num - 1; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
    ******************************************************************/
    /*****************************************************************
        int num;
        int i;
        int arrsrc[num];
        int arrdest[num];
        printf("please enter the numbers of arrays ");
        scanf("%d",&num);
        for(i = 0; i < num; i++){
            scanf("%d",&arrsrc[i]);
        }
        for(i = 0; i<num; i++){
            arrdest[i] = arrsrc[i];
        }
        printf("this is destination array \n");
        for(i = 0; i < num; i++){
            printf("%d",arrdest[i]);
        }
    ***************************************************************************/
/*******************************************************************************
    int num;
    int i;
    int j;
    int count = 0;
    printf("please enter the numbers of arrays ");
    scanf("%d",&num);
    int arr[num];
    int flag[num];
    printf("enter %d numbers \n",num);
    for(i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
        flag[i] = 0;
    }
    for(i = 0; i < num; i++)
    {
        if(flag[i] == 1)
        {
            continue;
        }
        else
        {
            for(j = i + 1; j < num; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                    flag[j]=1;
                    break;
                }
            }
        }
    }
    printf("numbers of dulicated is %d \n",count);

*******************************************************************************/
/*****************************************************************************
    int num;
    int i;
    int j;
    int count = 0;
    printf("please enter the numbers of arrays ");
    scanf("%d",&num);
    int arr[num];
    printf("enter %d numbers \n",num);
    for(i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("uniqe numbers are: ");
    for(i = 0; i < num; i++)
    {
        int flag = 0;
            for(j = 0; j < num; j++)
            {
                if(i != j && arr[i] == arr[j])
                {
                    flag = 1;
                    break;
                }
                else{}
            }
            if(flag == 0){
                printf("%d ",arr[i]);
            }
        }
****************************************************************************************/
  /*************************************************************************************
    int num;
    int i;
    int j;
    int count = 0;
    printf("please enter the numbers of arrays ");
    scanf("%d",&num);
    int arr[num];
    int freq[num];
    printf("enter %d numbers \n",num);
    for(i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
        freq[i] = -1;
    }
    for(i = 0; i < num; i++) {
        int count = 1;
        for(j = i + 1; j < num; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
        else{}
    }
    for(i = 0; i < num; i++) {
        if(freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
*************************************************************************************************/
   /********************************************************************************************
    int num;
    int i;
    int max;
    int min;
    printf("please enter the numbers of arrays ");
    scanf("%d",&num);
    int arr[num];
    printf("enter %d numbers \n",num);
    for(i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i = 1; i < num; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
       else if(arr[i] < min)
        {
            min = arr[i];
        }
        else{}
    }

    printf("maximum number is %d\n", max);
    printf("minimum number is %d\n", min);

*******************************************************************************************************/
/******************************************************************************************************
    int num;
    int i;
    int j;
    int temp;
    printf("please enter the numbers of arrays ");
    scanf("%d",&num);
    int arr[num];
    printf("enter %d numbers \n",num);
    for(i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < num - 1; i++)
    {
        for(j = i + 1; j < num; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("array in ascending order: \n");
    for(i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

***************************************************************************************************************/
 /*************************************************************************************************
    int num;
    int i;
    int j;
    int temp;
    printf("please enter the numbers of arrays ");
    scanf("%d",&num);
    int arr[num];
    printf("enter %d numbers \n",num);
    for(i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < num - 1; i++)
    {
        for(j = i + 1; j < num; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("array in descending order: \n");
    for(i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
************************************************************************************************************/
   /********************************************************
    int num;
    int i;
    int binary[32];
    printf("please enter a decimal number ");
    scanf("%d",&num);
    i = 0;
    while(num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("binary number is: ");
    for(i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

   ******************************************************************/
    /********************************************************************
    char str[] = "Hello ITI Intake46";
    int i;
    int count = 1;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            count++;
        }
    }
    printf("total number of words is %d\n", count);
******************************************************************************************/
/*************************************************************************************************
    char str[] = "Hello ITI Intake46";
    int i;
    int length = 0;
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }
    printf("length is %d\n", length);


/***************************************************************************************************
    char str1[100];
    char str2[100];
    int i;
    int flag = 0;
    printf("please enter first string: ");
    scanf("%s", str1);
    printf("please enter second string: ");
    scanf("%s", str2);
    for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if(str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        printf("strings are equal\n");
    } else {
        printf("strings are not equal\n");
    }

********************************************************************************/

   /**************************************************************************************
    char str1[100];
    char str2[100];
    int i;
    printf("please enter a string: ");
    scanf("%s", str1);
    for(i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("the copied string is: %s\n", str2);

*******************************************************************************/
/******************************************************************
char str[] = "Hello ITI Intake46";
    int i;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    printf("converted sentence: %s\n", str);
    *****************************************************************/

    return 0;
}



