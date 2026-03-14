/*Calculate the sum of the following series (𝑛 is user input).
1/1−1/2+1/3−1/4+1/5−1/6+1/7−⋯±1/𝑛
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
        if(i%2 !=0){
        sum=sum+1.0/i;
        }
        else{
            sum=sum-1.0/i;

        }
    }
    printf("The sum is %.06lf ",sum);

}
