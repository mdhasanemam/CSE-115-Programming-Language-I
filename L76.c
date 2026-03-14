/*Suppose a man (say, A) stands at (0, 0) and waits for user to give him the direction and distance to go.
User may enter N E W S for north, east, west, south, and any value for distance.
When user enters 0 as direction, stop and print out the location where the man stopped
*/

#include<stdio.h>

int main()
{
    float x=0,y=0;
    char dir;
    float dis=0;


    while(1)
    {
        printf("Enter N E W S : ");
    scanf(" %c",&dir);
    if(dir == '0')
    {
        break;
    }
    printf("Enter Distance: ");
    scanf("%f", &dis);
        if(dir == 'N' || dir =='n')
        {
            y=y+dis;
        }
        else if(dir == 'S' || dir =='s')
        {
           y=y-dis;
        }
        else if(dir == 'E' || dir =='e')
        {
            x=x+dis;
        }
        else if(dir == 'W' || dir =='w')
        {
             x=x-dis;
        }
        else
        {
            printf("Invvalid");
        }
    }
    printf("The man stopped at %f %f",x,y);
    return 0;
}
