/*19. Harmonic Series and Their Sum

Write a program in C to display the n terms of a harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
Test Data :
Input the number of terms : 5
Expected Output :
1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
Sum of Series upto 5 terms : 2.283334*/


#include<stdio.h>

int main(){

int n;
float sum=0.0;
printf("Enter n:");
scanf("%d",&n);

for(int i=1;i<=n;i++){

   printf("1/%d",i);
if(i<n){
    printf("+ ");

}else{
printf("+ \n");
}
    sum=sum+(1.0/i);

}
printf("\nthe sum is %f",sum);



}
