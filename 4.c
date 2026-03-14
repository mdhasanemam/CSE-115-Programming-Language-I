/*4. Sum and Average of 10 Numbers from Keyboard

Write a program in C to read 10 numbers from the keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000*/
#include<stdio.h>

int main()
{

    float num,sum=0;

    for(int i=1; i<=10; i++)
    {

        printf("Enter numbers :");
        scanf("%f",&num);
        sum+=i;
        }

         printf("The sum is %2f,and the avg is %2f",sum,sum/10);

}
