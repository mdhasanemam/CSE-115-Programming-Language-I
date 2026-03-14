/*12. Right Angle Triangle with Sequentially Increasing Numbers

Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.

The pattern like :

   1
   2 3
   4 5 6
   7 8 9 10*/

   #include<stdio.h>
   int main(){

   int rows,k=1;

printf("Enter rows; ");
scanf("%d",&rows);

for(int i=1;i<=rows;i++){

    for(int j=1;j<=i;j++){
        printf("%d ",k);
        k++;
    }
    printf("\n");
}

   }
