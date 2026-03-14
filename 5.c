/*5. Display Cube of Numbers Up to an Integer

Write a program in C to display the cube of the number up to an integer.
Test Data :
Input number of terms : 5
Expected Output :
Number is : 1 and cube of the 1 is :1
Number is : 2 and cube of the 2 is :8
Number is : 3 and cube of the 3 is :27
Number is : 4 and cube of the 4 is :64
Number is : 5 and cube of the 5 is :125*/

#include<stdio.h>
#include<math.h>

int main()
{

    int x;

    printf("Enter number :");
    scanf("%d",&x);

    for(int i =1; i<=x; i++)
    {

        int cube= pow(i,3);

        printf("\nThe cube of %d  is %d\n",i,cube);

    }




}
