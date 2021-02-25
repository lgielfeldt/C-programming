#include <stdio.h>

#include "Header.h"

void Lecture_name6() {
    printf("\n******************************************"
           "\n*************** Lecture  6 ***************"
           "\n******************************************\n\n\n\n");
}


//************************** Exercise 6_1 ************************
// Party exercise. Let’s assume one person drinks 3 (constant) beers in an hour.
// Write a C code and your own function that calculates the number of beers
// (unsigned integer) you will need if you invite your friends for a party?
// The number of guests (unsigned short) and the party duration length
// (in hours - float) you read in from the keyboard.
void exercise6_1() {
    printf("*************** Exercise 6_1 *************** \n\n");
}
double Beers() {
    int const number_of_beers = 3;
    int number_of_guests;
    double duration_of_party;
    char str1[1000];
    char str2[1000];
    double beers_needed;

    printf("You are having a party, and want to know how many beers you need to buy.\n");
    printf("Enter number of guests:");
    fgets(str1, sizeof str1, stdin);
    sscanf(str1, "%i", &number_of_guests);

    printf("Enter the expected duration of the party:");
    fgets(str2, sizeof str2, stdin);
    sscanf(str2, "%lf", &duration_of_party);

    beers_needed = number_of_beers * number_of_guests * duration_of_party;

    printf("Beers needed: %.2f\n", beers_needed);

    return beers_needed;
}

//************************** Exercise 6_2 ************************
//2. Calculator exercise.
//a. Create functions, that calculate the sum, subtraction, multiplication and
//   division of two numbers. The two numbers are passed to the function as arguments.
//b. Organize these functions into own-created header files and source files
//c. Read two numbers (type double) from the keyboard for the calculation.
//   Create a menu system, that will prompt the user to choose the operation
//   choice (+, -, * or /) (can be a character or number from 1 to 4 – use
//   switch-case control structure). After the operation is selected, the
//   corresponding function is called and the operation is performed. See the sample below.

//  Enter your two numbers: 12 15
//      MENU
//      1. Add
//      2. Subtract
//      3. Multiply
//      4. Divide
//  Enter your choice: 3
//  Result: 12 * 15 = 180

void exercise6_2() {
    printf("*************** Exercise 6_2 *************** \n\n");

}

double givesa(double a) {

    char str1[1000];

    printf("Enter your value of a:");
    fgets(str1, sizeof str1, stdin);
    sscanf(str1, "%lf", &a);

    return a;
}

double givesb(double b) {
    char str2[1000];
    printf("Enter your value of b:");
    fgets(str2, sizeof str2, stdin);
    sscanf(str2, "%lf", &b);

    return b;
}
double sumfunction(double a, double b) {

    double sum = a + b;

    return sum;
}

double difference(double a, double b) {

    double diff = a - b;

    return diff;
}

double productfunction(double a, double b) {

    double product = a * b;

    return product;
}

double relationfunction(double a, double b) {

    double relation = a / b;

    return relation;
}

void printing(double a, double b, double x, double y, double z, double g){

    printf("The sum of a and b is: %lf + %lf = %.2lf \n", a, b, x);
    printf("The difference of a and b is: %lf - %lf = %.2lf \n", a, b, y);
    printf("The product of a and b is: %lf * %lf = %.2lf \n", a, b, z);
    printf("The relation of a and b is: %lf / %lf = %.2lf \n", a, b, g);

}