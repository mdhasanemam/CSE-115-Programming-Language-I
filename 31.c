/*31. Diamond Pattern Display

Write a program in C to display a pattern like a diamond.

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include<stdio.h>

int main()
{

    int rows;

    printf("Enter rows: ");
    scanf("%d",&rows);

    for(int i=1; i<=rows; i++)
    {

        for(int j=1; j<=(rows-i); j++)
        {
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++)
        {
            printf("*");

        }
        printf("\n");
    }

    for(int i=rows-1; i>=1; i--)
    {

        for(int j=1; j<=(rows-i); j++)
        {
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++)
        {
            printf("*");

        }
        printf("\n");
    }

}
