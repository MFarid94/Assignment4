/*
 * Exercise5.c
 *
 *  Created on: Jan 27, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#define SIZE 10

/* A function that copy all elements of an array into another */
void CopyArray(int *ptrA , int *ptrB){
	int i;

	for(i=0 ; i<SIZE ; i++){
		*ptrB = *ptrA;
		ptrA++;
		ptrB++;
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stdout , NULL , _IONBF , 0);

	int i;
	int array_A[SIZE];
	int array_B[SIZE];
	int *ptrA = array_A;
	int *ptrB = array_B;
	/* Scanning user for elements of array A */
	printf("Enter elements of array A: ");
	for(i=0 ; i<SIZE ; i++){
		scanf("%d",ptrA);
		ptrA++;
	}

	/* Passing array A & B to be copied */
	CopyArray(array_A,array_B);

	/* Displaying Array B */
	for(i=0 ; i<SIZE ; i++){
		printf("ArrayB[%d] = %d \n",i,*ptrB);
		ptrB++;
	}

	return 0;
}
