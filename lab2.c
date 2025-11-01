#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
/********************************************

    int frist_number;
    int last_number;
    printf("Enter the frist_number: ");
    scanf("%d", &frist_number);

    printf("Enter the last_number: ");
    scanf("%d", &last_number);

    printf("the range numbers of even is %d to %d \n", frist_number,last_number );

    for (int i = frist_number; i <= last_number; i++)
    {
        if (i % 2 == 0)
        {
           printf("%d \n", i);
        }
        else
        {

        }
    }

     printf("the range of odd numbers numbers from %d to %d is \n", frist_number,last_number );
    for (int i = frist_number; i <= last_number; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d \n", i);
        }
        else
        {

        }
    }

**********************************************************/






/**************************************************
    int number ;
    printf("enter number: ");
    scanf("%d", &number);
    int fact =1;
    if(number > 0)
    {

        for(int i=1; i<=number; i++)
        {
            fact *= i;
        }
        printf("factorial is %d",fact );

    }
    else
    {

    }



**********************************************/

/********************************************
    int number ;
    int result;
    printf("enter number ");
    scanf("%d", &number);
    if(number>0)
    {
        for(int i = 1; i<=10; i++)
        {
            result= number*i;
            printf("%d \n",result);
        }

    }

*********************************************/
/********************************************
    int i, j, rows;
    printf("number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

********************************************/
/*******************************************
    int i, j, space, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {

        for (space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
*************************************************/
/************************************************
    int frist_num;
    int last_num;

    printf("Enter the frist_num of the range: ");
    scanf("%d", &frist_num);

    printf("Enter the last_num of the range: ");
    scanf("%d", &last_num);

    printf("Prime numbers between %d and %d are:\n", frist_num, last_num);

    for (int i = frist_num; i <= last_num; i++)
    {
        int prime = 1;

        if (i >= 2)
        {
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    prime = 0;
                }
            }
            if (prime == 1)
            {
                printf("%d ", i);
            }
        }
    }
    printf("\n");

***********************************************************/
/**********************************************************
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }

***************************************************************/
/***************************************************************
    char ch;

    printf("enter an alphabet: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("%c is a vowel\n", ch);
        }
        else
        {
            printf("%c is a consonant\n", ch);
        }
    }
    else
    {
        printf("invalid char\n");
    }
**********************************************************************/
/***********************************************************************


    int number;
    int guess;

    srand(time(0));

    number = (rand() % 100) + 1;


    printf("thinking of a number between 1 and 100\n");
    printf("enter your guess: ");
    scanf("%d", &guess);

    if (guess == number)
        printf("correct guessed  The number was %d\n", number);
    else
        printf(" Wrong guessed The number was %d\n", number);

**********************************************************/

    return 0;
}

