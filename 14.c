/*14. Pyramid Pattern with Asterisks

Write a C program to make such a pattern as a pyramid with an asterisk.

   *
  * *
 * * *
* * * *
*/

#include<stdio.h>

int main(){

int rows;

printf("Enter rows: ");
scanf("%d",&rows);

for(int i=1;i<=rows;i++){

    for(int j=1;j<=(rows-i);j++){
        printf(" ");
    }
    for(int j=1;j<=i;j++){
        printf("* ");

    }
    printf("\n");
}

}

