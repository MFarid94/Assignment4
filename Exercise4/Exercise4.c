/*
 * Exercise4.c
 *
 *  Created on: Jan 27, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#define SIZE 10

/* A function that determines smallest number in an array */
int SmallestValue(int *ptr){
	int i;
	int minimum;
	minimum = *ptr;

	for( i=1 ; i<SIZE ; i++){

		if(minimum > *ptr){
			minimum = *ptr;
		}
		ptr++;
	}

	return minimum;
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);

	int arr[SIZE];
	int i, minimum_value;
	int *ptr = arr;

	/* Scanning user for array elements */
	printf("Enter array elements: ");
	for(i=0 ; i<SIZE ;i++){
		scanf("%d",ptr);
		ptr++;
	}

	/* Passing array to function */
	minimum_value = SmallestValue(arr);

	/* Displaying Smallest number in array */
	printf("The smallest number in an array is %d",minimum_value);

	return 0;
}
