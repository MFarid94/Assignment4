/*
 * Exercise11.c
 *
 *  Created on: Feb 1, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function to swap the value of
 * the two 16-bits of 32-bits integer number*/
void SwapBits(unsigned int *ptr){

	unsigned short temp;
	unsigned short *ptrS = (unsigned short *)ptr;

	temp = *ptrS;
	*ptrS = *(ptrS + 1);
	*(ptrS + 1) = temp;
}

int main(void){
	setvbuf(stdout, NULL ,_IONBF , 0);
	setvbuf(stderr, NULL ,_IONBF , 0);

	unsigned int number;
	unsigned short *ptr = (unsigned short *)&number;

	printf("Enter number: ");
	scanf("%d",&number);


	printf("Two 16-bits of 32-bits integer number before swapping are %hi  and  %hi\n",*ptr,*(ptr+1));

	/* Passing the address of an unsigned integer and receiving it in a pointer to short*/
	SwapBits(&number);

	printf("Two 16-bits of 32-bits integer number after swapping are %hi  and  %hi",*ptr,*(ptr+1));

	return 0;
}
