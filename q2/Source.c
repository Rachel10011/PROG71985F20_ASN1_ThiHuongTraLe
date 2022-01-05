//PROG71985-F20
//Assignment 1
//Question 2
//by Thi Huong Tra Le (Rachel) 
//September 2020

#include <stdio.h>

#define CONVERT_YEARS_TO_DAYS(n) n*365		//A year has 365 days

int main(void)
{
	int myAgeInYears = 18;
	int myAgeInDays = CONVERT_YEARS_TO_DAYS(myAgeInYears);		

	printf("My %d years of age converted to days is %d days\n", myAgeInYears, myAgeInDays);

	return 0;
}