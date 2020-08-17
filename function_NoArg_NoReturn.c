#include<stdio.h>

int demo();

int main()
{
    
    printf("The result is: %d",demo());
    return 0;
}


int demo()
{
    int a,b,sum;
    a = 100;
    b = 480;
    sum = a+b;
    // printf("The result is: %d", sum);
    return sum;
}