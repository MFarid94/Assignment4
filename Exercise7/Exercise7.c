/*
 * Exercise7.c
 *
 *  Created on: Jan 27, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function that swaps two numbers using bitwise operator */
void Swap(int *X, int *Y){
	*X = *X ^ *Y;
	*Y = *X ^ *Y;
	*X = *X ^ *Y;
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);

	int num1 , num2 ;
	void (*ptr)(int *,int *) = Swap;

	/* Scanning user for two numbers */
	printf("Enter first number: ");
	scanf("%d",&num1);

	printf("Enter second number: ");
	scanf("%d",&num2);

	/* Displaying two numbers before swapping */
	printf("Displaying two number before swapping\n");
	printf("First number is %d , Second number is %d\n",num1,num2);

	/* Calling swap function using pointer to function */
	(*ptr)(&num1 , &num2);

	/* Displaying two number after swapping */
	printf("Displaying two numbers after swapping\n");
	printf("First number is %d , Second number is %d",num1,num2);

	return 0;
}
