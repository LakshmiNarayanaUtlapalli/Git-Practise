#include<stdio.h>
int digit();
int main()
{
    int n;
    printf("enter a integer number");
    scanf("%d",&n);
    int number=digit(n);
    printf("%d",number);
    return 0;
}
 int digit(int y)
{
    while(y>10)
    {
        y/=10;
    }
    return y;
}