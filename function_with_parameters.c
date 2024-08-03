#include<stdio.h>
int getmax(int x, int y) /* created a function called getmax and passed two parameters called x,y*/
{
    if(x>y)         /* created if statement with condition if x is greater than y return x to the caller else return y*/
    {
        return x;
    }
    else{
        return y;
    }
}
int main()        /* in C always compilation starts with main function first complier jumps to the main function*/
{
    int x=20, y=10;   /* decleraing and intializing the variable x=20 and y=10*/
    printf("%d",getmax(x,y)); /* then controller jumps to the printf line there we are calling getmax function then immediately goes to 
                               getmax function and replaces x and y values note both functions has same x and y variables but both are diferent
                                because their scope specific to that function*/
    return 0;
}
