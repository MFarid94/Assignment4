/*
 * Exercise9.c
 *
 *  Created on: Jan 28, 2021
 *      Author: Muhammad Farid
 */
#include<stdio.h>

char arr[256];

/* a function that return a string of the last two letters
 * of a given string reversed and separated by a space */
char* LastLetters(char *str){

	while(*str != '\0'){
		str++;
	}

	arr[0] = *(--str);

	arr[1] = ' ';

	arr[2] = *(--str);

	arr[3] = '\0';

	return arr;
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);

	char str[256];

	printf("Enter a string: ");
	gets(str);

	printf("Reversed string: %s",LastLetters(str));

	return 0;
}
