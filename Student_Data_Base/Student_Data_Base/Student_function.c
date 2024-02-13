//
//  Student_function.c
//  Student_Data_Base
// The third project in the c language (full)
//
//  Created by Youssef on 26/09/2023.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "Student_function.h"

int main(int argc, const char *argv[])
{

    enter();
    // backup = (studend *)malloc(sizeof(studend));

    return 0;
}

//

studend *backup;
studend add[100];
ui16 totalstudents = 0;
si16 num_students = 0;
si16 delete = -1;

//============================================= function enter ============================
void enter(void)
{

    while (1)
    {
        ui16 choce;
        printf(" ***********************************************\n");
        printf(" ************** Student_Data_Base **************\n");
        printf(" ***********************************************\n\n");

        printf("(1) - To add entry\n");                       // enter data  :)
        printf("(2) - To get used size in database\n");       // print a number student
        printf("(3) - To read student data\n");               // read a some student
        printf("(4) - To get the list of all student IDs\n"); // print all  the  data of student by id
        printf("(5) - To check is ID is existed\n");          // check is ID in least
        printf("(6) - To delete student data\n");             // delete student
        printf("(7) - To check is database is full\n");       // check  storge  database is full or not  ***
        printf("(0) - To exit \n\n");

        printf(" Eenter your chose :  ");
        scanf("%hu", &choce);

        if (choce <= 7)
        {
            switch (choce)
            {
            case 1:
                create_entry(add, num_students);
                break;

            case 2:
                database(backup); // = & add[0]
                break;

            case 3:
                read_student(backup, num_students);
                break;

            case 4:
                list(&add[0]);
                break;

            case 5:
                check_ID(add, num_students);
                break;

            case 6:
                delete_student(add, num_students); //
                break;

            case 7:
                check_full(add, num_students);
                break;

            case 0:
                printf(" Thanks Used the app .... :) \n");

                return;

            default:
                printf(" Error Choosing .... \n");
                break;
            }
        }

        else if (choce >= 7)
        {
            printf("--------------------------------------------\n");
            printf(" plaess Choose from the numbers [0 : 7] \n");
            printf("--------------------------------------------\n");
        }
    }
}
// ============================================= [1] function Craete ============================ :)

void create_entry(studend add[], ui16 totalstudents) // = *add

{
    ui16 Number_chose;
    ui16 check;

    printf(" ***********************************************\n");
    printf(" ************** Welcaome to Learing **************\n");
    printf(" ***********************************************\n\n");

    if (totalstudents >= 100)
    {
        printf("No space available\n");
    }

    printf(" Enter a Numer add : ");
    scanf("%hu", &Number_chose);

    for (int i = 0; i < Number_chose; i++)
    {
        printf("Student #%d \n", totalstudents + i + 1);
        printf(" ID Student is    :  ");
        scanf("%hu", &add[totalstudents + i].ID);

        printf("Course_1 ID is    :  ");
        scanf("%hu", &add[totalstudents + i].Course1_ID);
        printf("Course_1 Grade is :  ");
        scanf("%hu", &add[totalstudents + i].Course1_Grade);
        printf("Course_2 ID is    :  ");
        scanf("%hu", &add[totalstudents + i].Course2_ID);
        printf("Course_2 Grade is :  ");
        scanf("%hu", &add[totalstudents + i].Course2_Grade);
        printf("----------------------------------------------\n");
    }
    totalstudents += Number_chose;
    num_students = totalstudents;

    printf(" Done.. \n\n");
    printf("if you check a data you enter : Yes[1] No[0] ");
    scanf("%hu", &check);

    if (1 == check)
    {
        printf("\n -> The data you entered: \n\n");
        printf("----------------------------------------------\n");

        for (ui16 i = totalstudents - check; i < Number_chose;)
        {
            printf("Student #%d \n", 1 + i);
            printf(" ID Student is    : %hu \n", add[i].ID);
            printf("Course_1 ID is    : %hu \n", add[i].Course1_ID);
            printf("Course_1 Grade is : %hu \n", add[i].Course2_Grade);
            printf("-----------------------\n");

            printf("Course_2 ID is    : %hu \n", add[i].Course1_ID);
            printf("Course_2 Grade is : %hu \n", add[i].Course2_Grade);
            printf("-----------------------\n");
            break;
        }
    }

    else if (0 == check)
    {
        printf(" Done.. \n\n");
    }

    //    return 1 ; ////
}

//============================================= [2] function data base ============================  :)

void database(struct student *backup) // print a number student

{

    if (0 <= num_students)
    {
        printf(" Total Student #%d \n", num_students);
    }
    else
    {
        printf("  Not Found ..... \n");
    }
}

//============================================ [3] function read student ============================

void read_student(struct student *backup, ui16 totalstudents) // read a some student
{
    ui16 id;

    printf(" Entre the ID Student : ");
    scanf("%hu", &id);

    for (ui16 i = 0; i < totalstudents; i++)
    {
        if ((add[i].ID) == id)

        {
            printf(" ID Student is    : %hu \n", add[id].ID);
            printf("Course_1 ID is    : %hu \n", add[id].Course1_ID); //    != add[id]
            printf("Course_1 Grade is : %hu \n", add[id].Course1_Grade);
            printf("-----------------------\n");

            printf("Course_2 ID is    : %hu \n", add[id].Course2_ID);
            printf("Course_2 Grade is : %hu \n", add[id].Course2_Grade);
            printf("-----------------------\n");
            break;
        }
        else
        {

            printf(" - The Student  Does Nont Exist ..... ");
            return;
        }
    }
}

//============================================= [4] function list ============================

void list(struct student *backup)
{
    for (ui16 i = 0; i < num_students; i++)
    {
        printf(" Student #%i \n", i + 1);

        printf(" ID Student is    : %hu \n", backup[i].ID);

        printf("Course_1 ID is    : %i \n", backup[i].Course1_ID);
        printf("Course_1 Grade is : %i \n", backup[i].Course1_Grade);

        printf("Course_2 ID is    : %hu \n", backup[i].Course2_ID);
        printf("Course_2 Grade is : %hu \n", backup[i].Course2_Grade);
        printf("-----------------------\n");
    }
    printf(" ok \n ");
}

//============================================= [5] function check ID ============================

void check_ID(struct student add[], ui16 totalstudents)
{
    ui16 nume_id;

    printf("Entre the ID Student : ");
    scanf("%hu", &nume_id);

    for (ui16 i = 0; i < totalstudents; i++)
    {
        if (add[i].ID == nume_id) // check in data
        {
            printf(" Existing :) ... \v\n");
        }

        else if (nume_id != add[i].ID) // not in data
        {
            printf(" Found :(... \v\n");
        }
    }
}

//========================================== [6] function delete student ============================

void delete_student(struct student *add, ui16 *totalstudents)
{
    ui16 nume_id;
    int delete_index = -1;

    printf("Enter the ID of the student you want to delete: ");
    scanf("%hu", &nume_id);

    // Find the index of the student to delete
    for (ui16 i = 0; i < *totalstudents; i++)
    {
        if (add[i].ID == nume_id)
        {
            delete_index = i;
            break;
        }
    }

    if (delete_index == -1)
    {
        printf("Student Not Found\n");
        return;
    }

    // Shift elements to fill the gap
    for (ui16 i = delete_index; i < *totalstudents - 1; i++)
    {
        add[i] = add[i + 1];
    }

    (*totalstudents)--;

    // Reallocate memory for reduced size
    struct student *temp = (struct student *)realloc(add, (*totalstudents) * sizeof(struct student));
    if (temp == NULL)
    {
        printf("Memory reallocation failed\n");
        return;
    }

    add = temp;

    printf("Student deleted\n");
}
