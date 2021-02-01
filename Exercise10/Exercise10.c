/*
 * Exercise10.c
 *
 *  Created on: Jan 28, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function to swap two pointers */
void SwapPointer(int **pptrA , int **pptrB){

	int *temp = *pptrA;
	*pptrA = *pptrB;
	*pptrB = temp;
}

int main(void){
	int x=5;
	int y=10;

	int *ptrA = &x;
	int *ptrB = &y;

	printf("Values before swapping is %d and %d\n",*ptrA,*ptrB);

	SwapPointer(&ptrA,&ptrB);

	printf("Values after swapping is %d and %d",*ptrA,*ptrB);

	return 0;
}
