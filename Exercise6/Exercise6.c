/*
 * Exercise6.c
 *
 *  Created on: Jan 27, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#define SIZE 10

int maximum;

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);

	int i;
	int array[SIZE];
	int *ptr[SIZE];

	/* Scanning elements from user */
	printf("Enter array elements: ");
	for(i=0 ; i<SIZE ; i++){
		scanf("%d",&array[i]);

		/* Assign each element to corresponding pointer */
		ptr[i] = &array[i];
	}

	/* setting first element as maximum */
	maximum = *ptr[0];

	for(i=1 ; i<SIZE ; i++){

		if(maximum < *ptr[i]){
			maximum = *ptr[i];
		}
	}

	/* Displaying array elements and maximum number */
	for(i=0 ; i<SIZE ;i++){
		printf("Array[%d] = %d\n",i,*ptr[i]);
	}

	printf("Maximum number is %d",maximum);

	return 0;
}

