/*
Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.
Output:
Enter any String: development
The Length of Array is 11
*/
#include<stdio.h>
char CharLen(char text){
	return text;
}
void main(){
	char alpha[100];
	int length=0,i;
	printf("Enter any String: ");
	gets(alpha);
	for(i=0;i<alpha[i];i++){
		length++;
	}
	printf("The Length of Array is %d",CharLen(length));
}
