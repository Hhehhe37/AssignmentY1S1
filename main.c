/*
Purpose: Calculate GPA & CGPA
GPA = Quality Point / Credit Hours
CGPA = Total Quality Point / Total Credit Hours
Quality Point = Grade Point earned x Credit Hours
Prompt input and get
1. student name
2. student id
3. course code
4. current semester
5. grade point earned
6. credit hours
Process
1. navigation menu
    - student login
        -Enter student ID
            -view student ID
            -view gpa
    - teacher login
        -Enter teacher ID
    - exit
1. calculate quality point
2. calculate gpa
3. calculate cgpa
*/

#include <stdio.h>
#include <stdlib.h>
#define AAA1003 3
#define AAA1014 4

#pragma warning(disable:4996)
// declare global variable
char currentSemester[10], password[20];
char studentID[20], staffID[20];
float gradePoint, qualityPoint, gpa, cgpa;



// declare function datatype
void studentLogin();
void teacherLogin();
void exitProgram();

int main() {
    // declare variable
    int choice;

    //run menu 
    do {
        //menu option
        printf("\nMenu:\n");
        printf("1. Student Login\n");
        printf("2. Teacher Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice); //get choice

        rewind(stdin); // consume the newline character in the buffer

        // Process user choice
        switch (choice) {
        case 1:
            studentLogin();
            break;
        case 2:
            teacherLogin();
            break;
        case 3:
            exitProgram();
            break;
        default:
            printf("Invalid choice, Please Try Again.\n");
        }
    } while (choice != 3);

    return 0;
}



void studentLogin() {
    printf("You Choose Student Login 1.\n");

    // declare variable

    //Sem 1
    printf("Course code: AAA1003");
    printf("Credit hour: 3");

    printf("GPA: %.2f", gpa);
    printf("CGPA: %.2f", cgpa);
    
    printf("Course code: AAA1014");
    printf("Credit hour: 4");


    // Sem 2
    printf("Course code: AAA1003");
    printf("Course code: AAA1014");

    // sem 3
    printf("Course code: AAA1003");
    printf("Course code: AAA1014");
    


    printf("");
    printf("");

    

    // Show GPA, CGPA, Course Code, Credit Hours























}

void teacherLogin() {
    printf("You Choose Staff Login");
    printf("======================");


    // get input 
    printf("Enter Your Staff ID: ");
    scanf("%s", &staffID);
    rewind(stdin);

    printf("Enter Your Password: ");
    scanf("%s", &password);
    rewind(stdin);

    // menu
    int choice;
    do {
        
        printf("\nMenu:\n");
        printf("1. Enter Student name & ID\n");
        printf("2. Enter Student course code & grade point\n");
        printf("3. View Student GPA & CGPA\n");
        printf("4. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice); //get choice
        
            switch (choice) {
                case 1:

                    break;
                case 2:

                    break;

                case 3:

                    break;
                case 4:
                    main();
                    break;
                default:
                    printf("Invalid choice, Please Try Again.\n");
            }
    } while (choice != 4);



    printf("For couse AAA1003\n");
    printf("Enter Grade Point: ");
    scanf("%f", &gradePoint);
    rewind(stdin);


    // process
    qualityPoint = gradePoint * AAA1003;
    gpa = qualityPoint / AAA1003;


    // output
    printf("\n\nHello Staff %s!\n", studentID);
 
    printf("GPA = %.2f\n", gpa);

    printf("For your course AAA1003, the GPA is %.2f\n", gpa);
    //more code...
}


void exitProgram() {
    printf("Exiting the program...\n");
}