#include <stdio.h>

void Lecture_name7() {
    printf("\n******************************************"
           "\n*************** Lecture  7 ***************"
           "\n******************************************\n\n\n\n");
}

//************************** Exercise 7_1 ************************
//You have to work with complex numbers. Complex numbers have an Imaginary component and a Real component. Write
//a program that will do the following things:
//Create a new datatype called CompNR, using typedef, that will represent your complex number. This data type
//should be a structure, having two double type fields: Imag and Real
//  typedef struct {
//      double Imag;
//      double Real;
//  }CompNR;

void exercise7_1() {
    printf("*************** Exercise 7_1 *************** \n\n");
}

typedef struct complex {
    double Imag;
    double Real;
} CompNR;


//************************** Exercise 7_2 ************************
//2. Create two variables (representing two complex numbers) with the newly created data type
//CompNR a,b;




void exercise7_2() {
    printf("*************** Exercise 7_2 *************** \n\n");

    CompNR a;
    CompNR b;

    //************************** Exercise 7_3 ************************
    //3. Read the coefficients of the two numbers from the keyboard and print the two numbers on the screen.

    char str1[1000];
    char str2[1000];

    printf("Enter your complex number a in the form x+y:");
    fgets(str1, sizeof str1, stdin);
    sscanf(str1, "%lf  %lf", &a.Real, &a.Imag);

    printf("Enter your complex number b in the form x+y:");
    fgets(str2, sizeof str2, stdin);
    sscanf(str2, "%lf  %lf", &b.Real, &b.Imag);

    printf("%lf + %lf * i\n", a.Real, a.Imag);
    printf("%lf + %lf * i\n", b.Real, b.Imag);

}

//************************** Exercise 7_3 ************************
//4. Calculate the sum of the two numbers (a+b), the difference of the two complex numbers (a-b) and the product of the
//two numbers (a*b). Create for each operation a separate function (add_comp (), sub_comp(), prod_comp()). *See how
//do we operate with complex numbers. When calculating a product, pay attention that i^2=-1.
//Question: How would you return the results, knowing that functions can only return basic data types, cannot return
//structures or other complex datatypes (Hint Lecture 7, slide 20)?

double add_comp(double a,double b){

    double c = a + b;
    return c;
}

double sub_comp(double a,double b){

    double d = a - b;
    return d;
}

double prod_comp(double a,double b){

    double f = a * b;
    return f;
}

void printing2(double a,double b, double c,double d, double f){

    printf("The sum of a and b is: %lf + %lf = %.2lf \n", a, b, c);
    printf("The difference of a and b is: %lf - %lf = %.2lf \n", a, b, d);
    printf("The product of a and b is: %lf * %lf = %.2lf \n", a, b, f);
}