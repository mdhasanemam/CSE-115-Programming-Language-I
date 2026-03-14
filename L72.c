/*Calculate the sum of the following series (𝑛 is user input).
1/1+1/2+1/3+⋯+1/𝑛
*/


#include<stdio.h>
#include<math.h>

int main()
{

    int n;
    double sum=0;

    printf("Enter n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        sum=sum+1.0/i;

    }
    printf("The sum is %.01f ",sum);

}
