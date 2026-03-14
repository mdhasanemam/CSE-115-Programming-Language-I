/*17. Pyramid Pattern with Repeated Numbers

Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.

   1
  2 2
 3 3 3
4 4 4 4*/

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
        printf("%d ",i);

    }
    printf("\n");
}

}
