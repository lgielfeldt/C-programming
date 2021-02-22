#include <stdio.h>

void Lecture_name5() {
    printf("\n********************************************"
                  "\n*************** Lecture    5 ***************"
                  "\n********************************************\n\n\n\n");
}

// Exercise 1
// What do you think, is everything all right with the following code?


void exercise5_1() {

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

    // Runs just fine. However when inputting something which is neither Y or N, it
    // responds with both "You didn't choose Y or N" and "You answered yes".
    // This is because we are missing a "break;" after the default.

    // Also, it might benefit from a \n after each answer.

    // Try to correct the code:

}

void exercise5_1b() {

    printf("**** Corrected code: **** \n\n");

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


// Exercise 5_2
// Given are two 1D arrays (A and B), A is filled with unsigned short numbers, the other B is
// filled with 0s. Write a C program that copies all the elements of A array into the array B.
// Open DEBUG mode, look how the arrays look like in the memory and using breakpoint
// perform step-by-step execution of the statements.

void exercise5_2() {

    printf("*************** Exercise 5_2 *************** \n\n");



}

//Exercise 5_1
//Write a C program to fills an array with signed int numbers and search whether a given
//number exists in a 1D array or not. You will need to use loop to fill and check each element of
//the array and will have to make some comparisons between the elements and the given
//number using conditional statements.

void exercise5_3() {

    printf("*************** Exercise 5_2 *************** \n\n");


}

void exercise5_4() {

    printf("*************** Exercise 5_2 *************** \n\n");


}

/* **************************  Exercise 5 ************************ */

void exercise5_5() {

    printf("*************** Exercise 5_2 *************** \n\n");

}

void exercise5_6() {

    printf("*************** Exercise 5_2 *************** \n\n");

}
