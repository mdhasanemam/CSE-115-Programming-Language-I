/*Calculate the sum of the following series (𝑥 and 𝑚 are user inputs).
𝑥^0+𝑥^1+𝑥^2+𝑥^3+⋯+𝑥^𝑚
*/

#include<stdio.h>
#include<math.h>

int main()
{

    int x,m,sum=0;

    printf("Enter X,M");
    scanf("%d %d",&x,&m);
    for(int i=0; i<=m; i++)
    {
        sum=sum+pow(x,i);

    }
    printf("The sum is %d ",sum);

}
