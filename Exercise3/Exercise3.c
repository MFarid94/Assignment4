/*
 * Exercise3.c
 *
 *  Created on: Jan 27, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#define SIZE 10

void ReverseArray(int *ptr){
	int i;
	int temp;

	for(i=0 ; i<SIZE/2 ;i++){
		temp = ptr[i];
		ptr[i] = ptr[SIZE-1 - i];
		ptr[SIZE-1 - i] = temp;
	}
}

int main(void){
	setvbuf(stdout, NULL ,_IONBF , 0);
	setvbuf(stderr, NULL ,_IONBF , 0);
	int arr[SIZE];
	int i;


	printf("Enter array elements: ");
	for(i=0 ; i<SIZE ;i++){
		scanf("%d",&arr[i]);
	}

	for(i=0 ; i<SIZE ;i++){
		printf("Array element before re-arranging: arr[%d] = %d\n",i,arr[i]);
	}

	ReverseArray(arr);

	for(i=0 ; i<SIZE ;i++){
		printf("Array element after re-arranging: arr[%d] = %d\n",i,arr[i]);
	}

	return 0;
}
