// Online C compiler to run C program online
#include <stdio.h>
void fun()
{
    printf("this is fun() call\n");
}

int main() {
    // Write C code here
    printf("before calling fun()\n");
    fun();
    fun();
    printf("after calling fun()\n");

    return 0;
}