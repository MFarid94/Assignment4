/*
 * Exercise8.c
 *
 *  Created on: Jan 27, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#define SIZE 10

/* A function that swaps the elements of two arrays */
void Swap(int *ptrA , int *ptrB){
	int temp;
	int i;

	for(i=0 ; i<SIZE ; i++){
		temp = *ptrA;
		*ptrA = *ptrB;
		*ptrB = temp;
		ptrA++;
		ptrB++;
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);

	int arrayA[SIZE];
	int arrayB[SIZE];

	int *ptrA = arrayA;
	int *ptrB = arrayB;

	int i;

	/* Scanning user for elements of two arrays */
	printf("Enter elements of first array: ");
	for(i=0 ; i<SIZE ; i++){
		scanf("%d",ptrA);
		ptrA++;
	}

	printf("Enter elements of second array: ");
	for(i=0 ; i<SIZE ; i++){
		scanf("%d",ptrB);
		ptrB++;
	}

	/* resetting pointer */
	ptrA = arrayA;
	ptrB = arrayB;


	printf("\n");
	/* Displaying arrays before swapping */
	printf("Array elements before swapping\n");
	printf("Elements of first array:\n");
	for(i=0 ; i<SIZE ; i++){
		printf("ArrayA[%d] = %d\n",i,*ptrA);
		ptrA++;
	}

	printf("\n");
	printf("Elements of second array:\n");
	for(i=0 ; i<SIZE ; i++){
		printf("ArrayB[%d] = %d\n",i,*ptrB);
		ptrB++;
	}

	/* Passing array address to swap function */
	Swap(arrayA,arrayB);

	/* resetting pointer */
	ptrA = arrayA;
	ptrB = arrayB;

	printf("\n");
	/* Displaying arrays after swapping */
	printf("Array elements after swapping\n");
	printf("Elements of first array:\n");
	for(i=0 ; i<SIZE ; i++){
		printf("ArrayA[%d] = %d\n",i,*ptrA);
		ptrA++;
	}

	printf("\n");
	printf("Elements of second array:\n");
	for(i=0 ; i<SIZE ; i++){
		printf("ArrayB[%d] = %d\n",i,*ptrB);
		ptrB++;
	}

	return 0;
}
