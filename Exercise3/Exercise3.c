/*
 * Exercise3.c
 *
 *  Created on: Jan 27, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#define SIZE 10

void ReverseArray(int *ptr){ /* setting a pointer to array */
	int i;
	int temp;

	/* A loop to start swapping array elements in reverse order */
	for(i=0 ; i<SIZE/2 ;i++){
		temp = *ptr;
		*ptr = *(ptr + (SIZE-1) - i*2);
		*(ptr + (SIZE-1) - i*2) = temp;
		ptr++;
	}
}

int main(void){
	setvbuf(stdout, NULL ,_IONBF , 0);
	setvbuf(stderr, NULL ,_IONBF , 0);
	int arr[SIZE];
	int i;
	int *ptr = arr;

	/* Scanning user for array elements */
	printf("Enter array elements: ");
	for(i=0 ; i<SIZE ;i++){
		scanf("%d",ptr);
		ptr++;
	}

	/* Displaying array before re-arranging */
	for(i=0 ; i<SIZE ;i++){
		printf("Array element before re-arranging: arr[%d] = %d\n",i,arr[i]);
	}

	/* Sending array address to reverse function*/
	ReverseArray(arr);

	ptr = arr;           /* Re-setting the pointer to the first element in array */
	/* Displaying array after re-arranging in descending order */
	for(i=0 ; i<SIZE ;i++){
		printf("Array element after re-arranging: arr[%d] = %d\n",i,*ptr);
		ptr++;
	}

	return 0;
}
