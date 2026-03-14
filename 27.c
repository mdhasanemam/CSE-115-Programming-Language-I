/*27. Perfect Number Check

Write a C program to check whether a given number is a 'Perfect' number or not.
Test Data :
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.*/

#include<stdio.h>

int main(){

int num;
int sum=0;

printf("Enter number :");
    scanf("%d",&num);

for(int i=1;i<num;i++){

    if(num%i==0){
        printf("%d ",i);
        sum=sum+i;
        }
}
    if(sum==num){
        printf("The Number %d is a perfect number",num);
    }else{
    printf("\nThe Number %d is not a perfect number bcz the the sum is %d",num,sum);
    }






}
