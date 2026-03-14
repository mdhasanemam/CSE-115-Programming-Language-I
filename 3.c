/*3. Display n Terms of Natural Numbers and Their Sum

Write a program in C to display n terms of natural numbers and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7*/

#include<stdio.h>

int main()
{

    int x,sum=0;

    printf("Enter number :");
    scanf("%d",&x);

    for(int i =1; i<=x; i++)
    {

        sum=sum+i;


    }
    printf("The natural number is %d,and the sum is %d",x,sum);



}


