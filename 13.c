/*13. Pyramid Pattern with Increasing Numbers

Write a program in C to make a pyramid pattern with numbers increased by 1.

   1
  2 3
 4 5 6
7 8 9 10 */

#include<stdio.h>

int main()
{

    int rows,k=1;

    printf("Enter rows: ");
    scanf("%d",&rows);

    for(int i=1; i<=rows; i++)
    {

        for(int j=1; j<=(rows-i); j++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }

}
