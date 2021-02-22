#include <stdio.h>

void Lecture_name5() {
    printf("\n********************************************"
                  "\n*************** Lecture    5 ***************"
                  "\n********************************************\n\n\n\n");
}

//************************** Exercise 5_1 ************************
//What do you think, is everything all right with the following code?
void exercise5_1a() {
    printf("*************** Exercise 5_1 *************** \n\n");

    char answer;
    //setvbuf(stdout, NULL, _IONBF, 0);
    printf("read answer: ");
    scanf("%c", &answer);
    switch (answer) {
        default:
            printf("You didn't choose Y or N\n");
        case 'Y':
            printf("You answered yes");
            break;
        case 'N':
            printf("You answered no");
            break;
    }

    printf("\n\n\n**** Observations: **** \n\n");


    printf("- Runs just fine. However when inputting something which is neither Y or N, it\n"
           "  responds with both \"You didn't choose Y or N\" and \"You answered yes\".\n"
           "  This is because we are missing a \"break;\" after the default.\n"
           "- Also, it might benefit from a \\n after each answer.\n"
           "- Try to correct the code:\n\n");

            //   **** Observations: ****
            // - Runs just fine. However when inputting something which is neither Y or N, it
            //   responds with both "You didn't choose Y or N" and "You answered yes".
            //   This is because we are missing a "break;" after the default.
            // - Also it is using scanf, which can cause errors. It should use sscanf.
            // - Also, it might benefit from a \n after each answer.
            // - Try to correct the program:

}

void exercise5_1b() {
    printf("**** Corrected code (without sscanf: **** \n\n");

    char answer;
    printf("read answer, Y/N ?: ");
    scanf("%c", &answer);
    switch (answer) {
        default:
            printf("You didn't choose Y or N\n");
            break;
        case 'Y':
            printf("You answered yes\n");
            break;
        case 'N':
            printf("You answered no\n");
            break;
    }


    printf("\n\n\n\n");


}


void exercise5_1c() {
    printf("**** Corrected code (with sscanf) : **** \n\n");

    char answer;

    printf("read answer, Y/N ?: ");
    char str[60];
    fgets(str, 60, stdin);
    sscanf(str, "%c", &answer);
    switch (answer) {
        default:
            printf("You didn't choose Y or N\n");
            break;
        case 'Y':
            printf("You answered yes\n");
            break;
        case 'N':
            printf("You answered no\n");
            break;
    }


    printf("\n\n\n\n");


}


//************************** Exercise 5_2 ************************
//Given are two 1D arrays (A and B), A is filled with unsigned short numbers, the other B is
//filled with 0s. Write a C program that copies all the elements of A array into the array B.
//Open DEBUG mode, look how the arrays look like in the memory and using breakpoint
//perform step-by-step execution of the statements.
void exercise5_2() {
    printf("*************** Exercise 5_2 *************** \n\n");



}

//************************** Exercise 5_3 ************************
//Write a C program to fills an array with signed int numbers and search whether a given
//number exists in a 1D array or not. You will need to use loop to fill and check each element of
//the array and will have to make some comparisons between the elements and the given
//number using conditional statements.
void exercise5_3() {
    printf("*************** Exercise 5_2 *************** \n\n");


}

// ************************** Exercise 5_4 ************************
//Write a C program that deletes an element from a int 1D array from an arbitrary position,
//chosen by you. You will decide which position you what to delete. Delete one element: all the
//following elements will be moved forward by one position and the total number of the array
//will be decreased by one.
void exercise5_4() {
    printf("*************** Exercise 5_2 *************** \n\n");


}

//************************** Exercise 5_5 ************************
//Define an int 2D array with n x m elements. n and m will be read from the keyboard. Fill up
//the array with values using loops and print out the content of it on the screen. Similar exercise
//that we have done connected to Slide 21.
void exercise5_5() {
    printf("*************** Exercise 5_2 *************** \n\n");

}

//Write a C code that fills an n x m 2D array with short numbers and finds the largest and
//smallest element in it. One way to start is to select the very first element of the array as local
//min and local max in the same time. Browse through the array and compare the next element to
//the local min/max. If it is bigger than then the max, this will be the new max. If it is smaller then
//the local min than this will be the new min.
void exercise5_6() {
    printf("*************** Exercise 5_2 *************** \n\n");

}
