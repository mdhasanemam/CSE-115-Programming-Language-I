/*15. Factorial Calculation

Write a C program to calculate the factorial of a given number.
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120*/

#include<stdio.h>

int main(){

int a,fact=1;

printf("Enter the num: ");
scanf("%d",&a);

for(int i=1;i<=a;i++){
    fact=fact*i;
}
printf("The factorial of %d is %d ",a,fact);



}
