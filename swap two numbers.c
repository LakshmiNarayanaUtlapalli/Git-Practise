#include <stdio.h>

int main() {
    int a =2;
    int b=3;
    int change;
    change =a;   //change =3
    a=b;        //now a is 3
    b=change;   // now b is 2
    printf("\n%d\n%d",a,b);
    return 0;
}