/*
 * union_1.c
 *
 *  Created on: 6. mar. 2019
 *      Author: lat
 */


#include<stdio.h>

typedef union short_float_union
{
	float float_value;
	short short_value[2];
} Union_type_data;

Union_type_data data;

char a=0x00,b=0x00,c=0x20,d=0x3e;

int main()
{
	data.short_value[0]=(b<<8)+a;
	data.short_value[1]=(d<<8)+c;

	printf("%f",data.float_value);
	return 0;

}
