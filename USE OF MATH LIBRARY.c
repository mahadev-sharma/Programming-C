//write a program to receive as input as height in centimeter
//calculate height in feet and inches
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  puts("-----Enter the height in centimetr---");
  float heightInCentimeter;
  float heightInFeet;
  float heightInInches;
  scanf("%f",&heightInCentimeter);
  printf("Height In Centimeter=%f\n",heightInCentimeter);
  printf("height In Feet=%f\n",0.032*heightInCentimeter);
  printf("height In Inches=%f\n",0.39*heightInCentimeter);

    return 0;
}
