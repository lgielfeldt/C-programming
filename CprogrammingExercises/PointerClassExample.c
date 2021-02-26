/* Demonstrates using pointer arithmetic to access array elements with pointer notation
 * PointerClassExample.c
 *
 *  Created on: Feb 22, 2018
 *      Author: lat
 */

#include<stdio.h>
#define MAX 10

int i_array[MAX]={0,1,2,3,4,5,6,7,8,9};

int main(void)
{	/*Declare and initialize an integer array*/

	/* Declare a pointer to int and an int variable */
	int *i_ptr, count;

	/* Declare a pointer to float. */

	i_ptr=i_array;

	//setvbuf(stdout, NULL, _IONBF, 0);

	printf("The components of the array:\n");

	for (count=0;count<MAX;count+=2)
		printf("%i ",i_array[count]);

	printf("\n");

	for (count=0;count<10;count+=2)
		printf("%i ",*(i_ptr+count));

	return 0;

}
