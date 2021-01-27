/*
 * Exercise1.c
 *
 *  Created on: Jan 26, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	int size = 5;
	int arr[] = {1 ,2 ,3 ,4 ,5 };
	int *ptr = arr;
	int i;
	int sum =0;

	for( i=0 ; i<size ;i++){
		sum += *ptr;
		ptr++;
	}

	printf("Summation of given array is %d",sum);

	return 0;
}
