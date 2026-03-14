/*18. Sum of Series [1 - X²/2! + X⁴/4! - …]

Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].

*/

#include<stdio.h>
#include<math.h>

int main(){

int x;
float sum=0.0;
int fact=1;
printf("Enter x:");
scanf("%d",&x);

for(int i=2;i<=x;i=i+2){

   printf("1-%d^%d/%d!",x,i,i);
if(i<x){
    printf("+ ");

}else{
printf("+ \n");
}

fact=fact*i;
    sum=1-sum+(pow(x,i)/fact);

}
printf("\nthe sum is %f",sum);



}

