#include<stdio.h>

void demo(int a, int b);

int main()
{
    demo(100,800);
    return 0;
}


void demo(int a, int b)
{
    int sum;
    sum = a+b;
    printf("The result is: %d", sum);
    
}