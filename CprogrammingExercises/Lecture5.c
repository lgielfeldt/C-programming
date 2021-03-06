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
    setvbuf(stdout, NULL, _IONBF, 0);
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

    // printf("\n\n\n**** Observations: **** \n\n");


    /*printf("- Runs just fine. However when inputting something which is neither Y or N, it\n"
           "  responds with both \"You didn't choose Y or N\" and \"You answered yes\".\n"
           "  This is because we are missing a \"break;\" after the default.\n"
           "- Also, it might benefit from a \\n after each answer.\n"
           "- Try to correct the code:\n\n");*/

    //   **** Observations: ****
    // - Runs just fine. However when inputting something which is neither Y or N, it
    //   responds with both "You didn't choose Y or N" and "You answered yes".
    //   This is because we are missing a "break;" after the default.
    // - Also it is using scanf, which can cause errors. It should use sscanf.
    // - Also, it might benefit from a \n after each answer.
    // - Try to correct the program:

}

void exercise5_1b() {
    printf("\n**** Corrected code (without sscanf): **** \n\n");

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
    fgets(str, sizeof str, stdin);
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

    int i, A[5] = {1, 2, 3, 4, 5}, B[5] = {0, 0, 0, 0, 0};        // Initialize the variables

    printf("The content of A is:\n");                            // Gives the contents of A
    for (i = 0; i < 5; i++)
        printf("%i ", A[i]);
    printf("\n\n");

    printf("The content of B is:\n");                            // Gives the content of B
    for (i = 0; i < 5; i++)
        printf("%i ", B[i]);
    printf("\n\n");


    // copy contents of A into contents of B


    printf("Copying the content of A into B:\n");                            // Gives the contents of A
    for (i = 0; i < 5; i++) {
        B[i] = A[i];
    }
    for (i = 0; i < 5; i++) {
        printf("%i ", B[i]);
    }
    printf("\n\n");


}

//************************** Exercise 5_3 ************************
//Write a C program that fills an array with signed int numbers and search whether a given
//number exists in a 1D array or not. You will need to use loop to fill and check each element of
//the array and will have to make some comparisons between the elements and the given
//number using conditional statements.
void exercise5_3a() {
    printf("*************** Exercise 5_3a *************** \n\n");

    int i, A[5] = {1, 2, 3, 4, 5}, n = 5;

    printf("The content of A is:\n");                            // Gives the contents of A
    for (i = 0; i < 5; i++) {
        printf("%i ", A[i]);
    }
    printf("\n\n");

    // Does A contain a certain number?


    printf("Does A contain %i ?:\n", n);
    for (i = 0; i < 5; i++) {
        if (n == A[i]) {
            printf("Yes.\n");
            break;
        }
        if (i == n) { printf("No.\n"); }
    }
    printf("\n\n");
}

void exercise5_3b() {
    printf("*************** Exercise 5_3b *************** \n\n");
    printf("*** Input from the user *** \n\n");

    int i, A[5], n;

    printf("Input 5 numbers seperated by space:\n");            // read the values of an 1 dimensional array:
    for (i = 0; i < 5; i++)
        scanf("%i", &A[i]);

    printf("The content of A is:\n");                            // Gives the contents of A
    for (i = 0; i < 5; i++) {
        printf("%i ", A[i]);
    }
    printf("\n\n");

    // Does A contain a certain number?

    printf("To check i A contains a certain number n, input the number here:\n");
    scanf("%i", &n);

    printf("Does A contain %i ?:\n", n);
    for (i = 0; i < 5; i++) {
        if (n == A[i]) {
            printf("Yes.\n");
            break;
        }
        if (i == n) { printf("No.\n"); }
    }
}


// ************************** Exercise 5_4 ************************
//Write a C program that deletes an element from a int 1D array from an arbitrary position,
//chosen by you. You will decide which position you want to delete. Delete one element: all the
//following elements will be moved forward by one position and the total number of the array
//will be decreased by one.
void exercise5_4() {
    printf("*************** Exercise 5_4 *************** \n\n");

    int i, A[100], x, n;

    printf("Input the number of arrays wanted:\n");
    scanf("%i", &n);

    printf("Input %i numbers seperated by space:\n", n);
    for (i = 0; i < n; i++)
        scanf("%i", &A[i]);

    printf("The content of A is:\n");
    for (i = 0; i < n; i++) {
        printf("%i ", A[i]);
    }
    printf("\n\n");

    printf("Input the position you want to remove:\n");
    scanf("%i", &x);

    for (i = x; i < n; i++) {
        A[i - 1] = A[i];
    }

    n--;

    printf("The new array is:\n");
    for (i = 0; i < n; i++) {
        printf("%i ", A[i]);
    }
}

//************************** Exercise 5_5 ************************
//Define an int 2D array with n x m elements. n and m will be read from the keyboard. Fill up
//the array with values using loops and print out the content of it on the screen. Similar exercise
//that we have done connected to Slide 21.
void exercise5_5() {
    printf("*************** Exercise 5_5 *************** \n\n");


}

//Write a C code that fills an n x m 2D array with short numbers and finds the largest and
//smallest element in it. One way to start is to select the very first element of the array as local
//min and local max in the same time. Browse through the array and compare the next element to
//the local min/max. If it is bigger than then the max, this will be the new max. If it is smaller then
//the local min than this will be the new min.
void exercise5_6() {
    printf("*************** Exercise 5_6 *************** \n\n");

    int i, j, n, m, A[100][100], min, max;

    printf("Input the number of rows wanted:\n");               // (Vertical spaces)
    scanf("%i", &n);

    printf("Input the number of columns wanted:\n");            // (Horizontal spaces)
    scanf("%i", &m);

    printf("Input the content of A :\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            scanf("%i", &A[i][j]);
        }

    printf("Your 2D array looks like this:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            if (j == m - 1) { printf("%i \n", A[i][j]); }
            else { printf("%i ", A[i][j]); }
        }

    // we want to read min and max

    min = A[0][0];                                                    // just for initialization
    max = A[0][0];

    //now we compare

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            if (max < A[i][j]) { max = A[i][j]; }
            if (min > A[i][j]) { min = A[i][j]; }
        }

    printf("the maximum of the array is max = %i\n", max);
    printf("the minimum of the array is min = %i\n", min);


}

void tester() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("The sign of %d is %s\n\n", x,
           x < 0 ? "negative" : x == 0 ? "neutral" : "positive");
}