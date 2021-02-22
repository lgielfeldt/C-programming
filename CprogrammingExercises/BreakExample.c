/*
 * BreakExample.c
 *
 *  Created on: Sep 3, 2014
 *      Author: lat
 */
#include<stdio.h>


void Break_example(){
	int a=1;

	while (1) // infinite loops until the break statement is executed
	{ 	printf("a is %d; ",a);
		a = a*2;
		if(a>100) {
			break; // // Immediately jumps out of the while loop
		} else if(a==64) {
				continue; // Immediately jumps to the beginning of the while loop, skipping the eventual next steps
		}
		printf("a is not 64;\n");
	}

	printf("\nI'M DONE :)");
}
