/*26. Sum of Series 1 + 11 + 111 + …

Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
Test Data :
Input the number of terms : 5
Expected Output :
1 + 11 + 111 + 1111 + 11111
The Sum is : 12345
*/

#include<stdio.h>

int main()
{


    int term,t=0;
    int sum=0;

    printf("Enter term :");
    scanf("%d",&term);
    for(int i=1; i<=term; i++)
    {
        t=t*10+1;
        printf("%d",t);


        if(i<term)
        {
            printf("+ ");
        }

        sum=sum+t;

    }

    printf("The sum of is %d",sum);




}
