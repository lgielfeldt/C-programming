/*
 * struct_array.c
 *
 *  Created on: 7. mar. 2019
 *      Author: lat
 */

#include<stdio.h>

struct market
{
	char name[6];
	float price;
	float weight;
};

struct market a={"apple", 12.4, 3.4};

int x[3]={0,1,2};
struct market b[3]={{"pear",3.2,5.12},{"plum",43,3.23},{"nut",4.34,12}};
int i;

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Product: %5s, weight: %5.2f, price: %5.2f\n",a.name,a.weight,a.price);

//	for (i=0;i<3;i++)
//		printf("Product: %5s, weight: %5.2f, price: %5.2f\n",b[i].name,b[i].weight,b[i].price);

	return 0;

}
