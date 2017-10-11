// ConsoleApplication3.cpp : Defines the entry point for the console application.
//
/*NAME OF CODE:find the largest number among five values
CODE CREATOR:MAHADEV SHARMA
CODE INSTRUCTOR:ALLEN-SMITH
CODE CREATED IN CONESTOGA COLLEGE
DATE OF CODE GENERATION:7th NOVEMBER 2016
code description:first i am asking to user enter the value or store value,
and then storing them into array then  i go to compare them one by one in for loop
CODER:da_dvinci*/
float g_reatest();
#include <stdio.h>
int main() {
	float a[5];
	int i;
	printf("Enter five values one by one:");



	g_reatest();

	return 0;
}


/*  FUNCTION      : scanning the value of float value
DESCRIPTION   : This get the input and find the graetest among them
PARAMETERS    : NONE
RETURNS       : NOTHING*/
float g_reatest()
{
	float a[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf_s("%f", &a[i]);
	}
	float greatest;//Assume that a[0] is greatest
	greatest = a[0];
	for (i = 0; i < 5; i++)
	{
		if (a[i] > greatest)
		{
			greatest = a[i];
		}
	}
	printf("Greatest of five numbers is %f\n", greatest);
	return 0;
}