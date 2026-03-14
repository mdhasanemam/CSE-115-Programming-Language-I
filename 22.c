/*22. Floyd's Triangle

Write a program in C to print Floyd's Triangle.

1
01
101
0101
10101*/

#include<stdio.h>
int main(){

int rows;

printf("Enter rows; ");
scanf("%d",&rows);

for(int i=1;i<=rows;i++){

    for(int j=1;j<=i;j++){
        printf("%d",(i+j+1)%2);
    }
    printf("\n");
}


}

