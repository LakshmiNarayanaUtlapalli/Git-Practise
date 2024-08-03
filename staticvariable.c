#include <stdio.h>
void funct();//This is function decleration
static int i=0;
void main()
{
      printf("%d\n",i);
      funct();
      printf("after func call %d \n",i);
}
void funct()
{
    i=10;
    printf("%d \n",i);
    int n=1;
    while(n<i)
    {
       // n++;
        printf("%d \n",i);
        n++;
    }
    printf("%d \n",i);
}