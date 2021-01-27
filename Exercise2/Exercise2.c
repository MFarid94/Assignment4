/*
 * Exercise2.c
 *
 *  Created on: Jan 27, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function that find the length of a given string */
int StringLength(char *str){
	int count = 0;

	while(*str != '\0'){
		count++;
		str++;
	}

	return count;
}

int main(void){
	char str[20];
	int length;

	printf("Enter a string: ");
	gets(str);

	length = StringLength(str);

	printf("Length of string is %d",length);

	return 0;
}
