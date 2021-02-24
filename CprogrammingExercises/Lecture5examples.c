#include <stdio.h>



void Lecture5example1(){

    int i,n=3;
    int x[3];
    printf("Read the n numbers:\n"); // read the values of an n dimensional array:
    for (i=0;i<n;i++)
        scanf("%i",&x[i]);
    printf("The content of array:\n"); // print out one-by-one the values of an n dimensional array:
    for (i=0;i<n;i++)
    printf("%i ",x[i]);

}

