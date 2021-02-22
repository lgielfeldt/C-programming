#include <stdio.h>

void Lecturename() {
    printf("\n******************************************"
                  "\n*************** Lecture  4 ***************"
                  "\n******************************************\n\n\n\n");
}

/* Exercise 2
Create new “Empty” project and add to it an empty source (.c) file. Create
you own C code that defines 5 integer variables, a,b,c,d and e and assigns values to a
and b. Store in c the sum, in d the difference and in e the product of a and b. Print the
results on the screen. */

int exercise2(int a, int b) {

    printf("*************** Exercise 2 *************** \n\n");

    int c, d, e;
    float f;

    c = a + b;
    d = a - b;
    e = a * b;
    f = a / (float) b;

    printf("The sum of a and b is c = %i + %i = %i \n", a, b, c);
    printf("The difference of a and b is d = %i - %i = %i \n", a, b, d);
    printf("The product of a and b is e = %i * %i = %i \n", a, b, e);
    printf("The relation of a and b is f = %i / %i = %.2f \n\n\n\n", a, b, f);

    return c;
}

//Exercise 3 //
// Extend your C code that calculates the square of c number and print the result on the screen.

void exercise3(int c) {

    printf("*************** Exercise 3 *************** \n\n");

    printf("The square of c is = c^2 = %i * %i = %i \n\n\n\n", c, c, c * c);

}

/* Exercise 4: first order equation

Create a new project, and write a C code where consider a and b as the coefficients
of a first order equation and x as result (slide 13 and 46). Calculate in your C code the
solution of this first order equation. Check the result when the coefficients are declared
as integers (int). Change the type of the variables to be float. What observations can
you make? How can you obtain a floating result when the coefficients are still integers? */

void exercise4a(int a, int b) {

    printf("*************** Exercise 4a *************** \n\n");

    float x;

    x = b / a;

    printf("x = %f\n\n\n\n", x);

}

void exercise4b(float a, float b) {

    printf("*************** Exercise 4b *************** \n\n");

    float x;

    x = b / a;

    printf("x = %f\n\n\n\n", x);
}

/*  Exercise 5
    Write a C program that for a given radius of a circle, r, given from keyboard and stored in
    variables, calculates the diameter, circumference and area of the circle. */

void exercise5() {

    printf("*************** Exercise 5 *************** \n\n");

    int r, d;
    float pi, c, A;

    pi = 3.14;

    printf("Write your value of r here: ");
    scanf("%d", &r);

    d = 2 * r;
    c = 2 * pi * r;
    A = pi * r * r;

    printf("The diameter of the circle is d = 2 * %i = %i\n", r, d);
    printf("The circumference of the circle is c = 2 * pi * r = 2 * %f * %i = %.2f\n", pi, r, c);
    printf("The area of the circle is A = pi *r^2 = %f * %i^2 = %.2f\n\n\n\n", pi, r, A);


}

/* Write a C code that creates two variables and assign hexadecimal values to them, ex. int
   a=0x75, b=0xAC (you can change the values if you want, or you can read them from
   keyboard – see formatting of scanf and printf for hexadecimal numbers).

• Use the Debug function (see slides 53-54) to check the binary and decimal
  representation of these numbers.
• Assign to a third variable the result of a AND b, a OR b, a XOR b, a << 8, b >> 4 (see
  binary operators)
• Using bitwise operators, manipulate the original two numbers, so that in the third
  variable the result will be ex. h=0x75AC. Print the result in hexadecimal format. */

void exercise6() {

    printf("*************** Exercise 6 *************** \n\n");

    int a, b;

    a = 0x75;
    b = 0xAC;

    int c = a & b;      // a AND b      &  = bitwise AND
    int d = a | b;      // a OR b       |  = bitwise OR
    int e = a ^b;      // a XOR b      ^  = bitwise XOR
    int f = a << 8;     // a << 8       << = bitwise left shift operation
    int g = b >> 4;     // b >> 4       << = bitwise right shift operation


    printf("a AND b = 0x%X AND 0x%X = %i AND %i = 0x%X = %i \n", a, b, a, b, c, c);
    printf("a  OR b = 0x%X  OR 0x%X = %i  OR %i = 0x%X = %i \n", a, b, a, b, d, d);
    printf("a XOR b = 0x%X XOR 0x%X = %i XOR %i = 0x%X = %i \n", a, b, a, b, e, e);
    printf("a  << 8 = 0x%X  << 0x%X = %i  << %i = 0x%X = %i \n", a, 8, a, 8, f, f);
    printf("b  >> 4 = 0x%X  >> 0x%X = %i  >> %i = 0x%X = %i \n", b, 4, b, 4, g, g);

    int h = (a << 8) | b;

    printf("(a << 8) | b = 0x%X \n\n\n\n", h);

}


void samplebig() {

    printf("*************** Sample big 5 *************** \n\n");

    int r, d;
    float pi, c, A;

    pi = 3.14;


    printf("Write your value of r here: \n");
    char str[60];
    fgets(str, 60, stdin);

    int parsed = sscanf(str, "%i", &r);
    while (parsed == 0) {
        printf("The input is not a number, please input a number.\n");
        printf("Write your value of r here: ");
        fgets(str, 60, stdin);
        parsed = sscanf(str, "%i", &r);
    }

    d = 2 * r;
    c = 2 * pi * r;
    A = pi * r * r;

    printf("The diameter of the circle is d = 2 * %i = %i\n", r, d);
    printf("The circumference of the circle is c = 2 * pi * r = 2 * %f * %i = %.2f\n", pi, r, c);
    printf("The area of the circle is A = pi *r^2 = %f * %i^2 = %.2f\n\n\n\n", pi, r, A);

}


void samplelittle() {

    printf("*************** Sample little ***************\n\n");

    int r, d;
    float pi, c, A;

    pi = 3.14;

    char str[60];
    int parsed = 0;

    while (parsed == 0) {
        printf("Write your value of r here: ");
        fgets(str, 60, stdin);
        parsed = sscanf(str, "%i", &r);

    }

    d = 2 * r;
    c = 2 * pi * r;
    A = pi * r * r;

    printf("The diameter of the circle is d = 2 * %i = %i\n", r, d);
    printf("The circumference of the circle is c = 2 * pi * r = 2 * %f * %i = %.2f\n", pi, r, c);
    printf("The area of the circle is A = pi *r^2 = %f * %i^2 = %.2f\n\n\n\n", pi, r, A);


}




int main() {
    Lecturename();
    int c = exercise2(3, 4);
    exercise3(c);
    exercise4a(3, 5);
    exercise4b(3, 5);
    exercise5();
    exercise6();
    samplebig();
    samplelittle();
    return 0;
}
