/*
 * FuncArg.c
 *
 *  Created on: Sep 10, 2014
 *      Author: lat
 */
#include<stdio.h>

struct product { //prototype definition
   int weight;
   float price;
};

struct product apple ={15,4.45};
float weightTimesPrice=0.0;

void funcByValue(struct product myProduct, float weightTimesPrice)
{	myProduct.price += 10;
	myProduct.weight -= 5;
	weightTimesPrice  =  myProduct.price * myProduct.weight;
}

void funcByAddress(struct product *myProduct, float *weightTimesPrice)
{	myProduct->price += 10;
	myProduct->weight -= 5;
	*weightTimesPrice  =  myProduct->price * myProduct->weight;
}
int main()
{	setvbuf(stdout, NULL, _IONBF, 0);

	funcByValue(apple, weightTimesPrice);
	//myProduct and weightTimesPrices will not be changed
	printf("Apple weight: %d and price %.2f -> weight x price: %.2f\n",apple.weight,apple.price,weightTimesPrice);
	funcByAddress(&apple, &weightTimesPrice);
	//myProduct and weightTimesPrices will be changed
	printf("Apple weight: %d and price %.2f -> weight x price: %.2f\n",apple.weight,apple.price,weightTimesPrice);
	return 0;
}
