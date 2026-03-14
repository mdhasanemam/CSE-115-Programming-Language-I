/*9. Right Angle Triangle Pattern with Asterisks

Write a program in C to display a pattern like a right angle triangle using an asterisk.

The pattern like :

*
**
***
****
*/
#include<stdio.h>
int main(){

int row;

printf("Enter rows :");
    scanf("%d",&row);

    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
                printf("*");
        }
        printf("\n");
    }


}
