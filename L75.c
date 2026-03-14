/*Read 10 integers from the user and calculate the sum of the positive numbers.
*/
#include<stdio.h>

int main()
{

    int a,sum=0;

    printf("Enter 10 Positive Number: \n");

    for(int i=1; i<=10; i++)
    {
        scanf("%d",&a);
        if(a<0)
            continue;
        sum=sum+a;
        printf("The number %d is added\n",a);

    }
    printf("The sum of positive number is : %d",sum);




}
