#include<stdio.h>

int squared(int n, int m);


int main(int argc, char const *argv[])
{
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("n = %d The result is: %d \n",i, squared(2,i));
    }
    printf("The result is: %d \n",squared(5,2));
    return 0;
}


int squared(int n, int m)
{
    int i, p;
    p = 1;
    for ( i = 1; i <= m; i++)
    {
        p = p * n;
        printf("The value of m is: %d\n",m);

    }
    return p;
}

