#include <stdio.h>
int digit(int y);

int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    digit(num);

    return 0;
}
int digit(int y)
{
    for(int i=1;i<y;i++)
    {
        if(y%i==0)
        {
           printf("%d",i);
        }
        
    }
}