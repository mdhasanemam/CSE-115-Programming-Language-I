/*Read a positive integer and determine if it is a prime number.
*/

#include<stdio.h>
int main()
{
    int n,flag=1;
    printf("Enter Positive number: ");
    scanf("%d",&n);
  if(n<=1){
        printf("\nThe number is not prime\n");
        return 0;
    }

    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }


    }
    if(flag==1){
        printf("\nThe number is prime");
    }else{
        printf("\nThe number is not prime");
    }
}

