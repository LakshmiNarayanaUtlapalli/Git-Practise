#include <stdio.h>
int a,b,c=20; //this is global variable
int main(){
    printf("enter a integer type number");
    scanf("%d",&a);
    printf("\neneted integer number is %i",a);
    printf("\nenter a integer type number");
    scanf("%d",&b);
    printf("\neneted integer number is %i",b);
    printf("\neneted integer number is %i",c);
    return 0;
}