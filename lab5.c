#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>





int main()
{
    /*****************************************************************************************
    #define number_of_students 3

    typedef struct  {
    char name[50];
    int age;
    float total_marks;
    }Student_t;

    Student_t ayman = {
                        .name = "ayman",
                        .age = 23,
                        .total_marks = 50
                    };

    Student_t ahmed = {
                        .name = "ahmed",
                        .age = 24,
                        .total_marks = 55.5
                    };

    Student_t ali = {
                        .name = "ali",
                        .age = 22,
                        .total_marks = 49.5
                    };


    Student_t students[number_of_students] = {ayman, ahmed, ali};
    float total = 0;
    float average;
    float highest = students[0].total_marks;
    int i;
    int j;

    for(i = 0; i < number_of_students; i++) {
        total += students[i].total_marks;
        if(students[i].total_marks > highest)
            highest = students[i].total_marks;
    }

    average = total / number_of_students;

    printf("students info :\n");
    for(i = 0; i < number_of_students; i++) {
        printf("name: %s, age: %d, total marks: %.2f\n", students[i].name, students[i].age, students[i].total_marks);
    }

    printf("average marks = %.2f\n", average);
    printf("highest marks = %.2f\n", highest);

    for(i = 0; i < number_of_students-1; i++) {
        for(j = i+1; j < number_of_students; j++) {
            if(students[i].total_marks < students[j].total_marks) {
                Student_t temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("top 3 ranked students:\n");
    for(i = 0; i < number_of_students && i < 3; i++) {
        printf("%d. %s - marks: %.2f\n", i+1, students[i].name, students[i].total_marks);
    }
    ***************************************************************************************************/
    /***********************************************************************************
     typedef struct {
             float real;
             float imag;
     }complex_t;

     complex_t num1 = {.real = 3.2,
                       .imag = 5.3
     };
     complex_t num2 = {.real = 2.5,
                     .imag = 1.4
     };

     complex_t sum;
     complex_t product;

     sum.real = num1.real + num2.real;
     sum.imag = num1.imag + num2.imag;

     product.real = (num1.real * num2.real) - (num1.imag * num2.imag);
     product.imag = (num1.real * num2.imag) + (num1.imag * num2.real);

     printf("sum = %.2f + %.2fi\n", sum.real, sum.imag);
     printf("product = %.2f + %.2fi\n", product.real, product.imag);
    *************************************************************************************************/
    /**********************************************************************************
        #define books_in_Library 3

        typedef enum {available,
                      issued
                }book_status_t;
        typedef enum {fiction,
                      science,
                      history,
                      art
                }book_category_t;

        typedef struct {
            char title[50];
            char author[50];
            float price;
            book_category_t category;
            book_status_t status;
        }book_t;

        book_t book1 = {"book1", "ahmed", 50.0, fiction, available};
        book_t book2 = {"book2", "sara", 60.0, science, issued};
        book_t book3 = {"book3", "omar", 70.0, art, available};

        book_t books[books_in_Library] = {book1, book2, book3};
        int fiction_count = 0;
        int science_count = 0;
        int history_count = 0;
        int art_count = 0;
        int i;

        for(i = 0; i < books_in_Library; i++) {
            if(books[i].category == fiction)
            {
                fiction_count++;
            }
            else if(books[i].category == science)
            {
                science_count++;
            }
            else if(books[i].category == history)
            {
                history_count++;
            }
            else
            {
              art_count++;
            }
        }

        printf("books info:\n");
        for(i = 0; i < books_in_Library; i++) {
            printf("%s by %s, price %.2f, category %d, status %d\n", books[i].title, books[i].author, books[i].price, books[i].category, books[i].status);
        }

        printf("\ncount by category:\n");
        printf("fiction: %d\nscience: %d\nhistory: %d\nart: %d\n", fiction_count, science_count, history_count, art_count);
    ***************************************************************************************************************************************************************/
/******************************************************************************************************************************************

#define max 100

    typedef enum {full_time,
                  part_time,
                  intern
                 } type_t;

    typedef enum {hr,
                  tester,
                  sales
                 } dept_t;

    typedef union
    {
        float hourly;
        float monthly;
    } pay_t;

    typedef struct
    {
        int id;
        char name[50];
        dept_t dept;
        type_t type;
        pay_t pay;
    } emp_t;

    emp_t emploee[max];
    int n=0;
    int c;
    int i;
    int j;
    int d;
    int id;
    float total;
    while(1)
    {
        printf("1 add\t2 remove\t3 filter dept\t4 filter type\t5 payroll\t6 search\t7 exit\n");
        scanf("%d",&c);

        if(c==1)
        {
            printf("id name dept(0-hr,1-tester,2-sales) type(0-full,1-part,2-intern) salary/hourly: ");
            scanf("%d%s%d%d",&emploee[n].id, emploee[n].name, (int*)&emploee[n].dept, (int*)&emploee[n].type);

            if(emploee[n].type == full_time)
            {
                scanf("%f", &emploee[n].pay.monthly);
            }

            else
            {
                scanf("%f", &emploee[n].pay.hourly);
            }


            printf("added employee: id=%d name=%s dept=%d type=%d ", emploee[n].id, emploee[n].name, emploee[n].dept, emploee[n].type);

            if(emploee[n].type == full_time)
            {
                printf("salary=%.2f\n", emploee[n].pay.monthly);
            }

            else
            {
                printf("hourly=%.2f\n", emploee[n].pay.hourly);
            }


            n++;
        }

        else if(c==2)
        {
            printf("id: ");
            scanf("%d",&id);
            for(i=0; i<n; i++)
            {
                if(emploee[i].id==id)
                {
                    for(j=i; j<n-1; j++)
                        emploee[j]=emploee[j+1];
                    n--;
                    break;
                }
                else {}
            }
        }

        else if(c==3)
        {
            printf("dept: ");
            scanf("%d",&d);
            for(i=0; i<n; i++)
            {
                if(emploee[i].dept==d)
                {
                    printf("%d %s dept:%d type:%d\n",emploee[i].id,emploee[i].name,emploee[i].dept,emploee[i].type);
                }
                else {}
            }
        }

        else if(c==4)
        {
            printf("type: ");
            scanf("%d",&d);
            for(i=0; i<n; i++)
            {
                if(emploee[i].type==d)
                {
                    printf("%d %s dept:%d type:%d\n",emploee[i].id,emploee[i].name,emploee[i].dept,emploee[i].type);
                }
                else {}
            }
        }

        else if(c==5)
        {
            total = 0;
            for(i=0; i<n; i++)
            {
                if(emploee[i].type == full_time)
                {
                    total += emploee[i].pay.monthly;
                }

                else
                {
                    total += emploee[i].pay.hourly * 160;
                }

            }
            printf("total payroll = %.2f\n", total);
        }

        else if(c==6)
        {
            printf("id: ");
            scanf("%d",&id);
            for(i=0; i<n; i++)
            {
                if(emploee[i].id==id)
                {
                    printf("id:%d name:%s dept:%d type:%d\n",emploee[i].id,emploee[i].name,emploee[i].dept,emploee[i].type);
                }
                else {}
            }
        }

        else if(c==7)
            break;
    }

*********************************************************************************************************************************************************/

    return 0;
}

