/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float mark1, mark2;
  float avg;

  printf("Enter the marks of subject 1 :");  // get marks from the user
  scanf("%f",&mark1);

  printf("Enter the marks of subject 2:");
  scanf("%f",&mark2);
  
  avg= (mark1+mark2) /2.0;  // calculate the avarage

  printf("Avarage of the marks :%.2f", avg);  // display the avarage

  return 0;
}

