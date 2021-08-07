// C program to check whether a given character is upper case, lower case, digit or special character 

#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if(ch >= 65 && ch <= 90) //To check for upper case
		printf("Upper");

	else if(ch >= 97 && ch <= 122) //To check for lower case
		printf("Lower");

	else if(ch >= 48 && ch <= 57) //To check for number
		printf("Number");
        
	else
		printf("Symbol");
return 0;
}