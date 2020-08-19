#include<stdio.h>
#include<math.h>

int x;
float result;

int main()
{
    printf("Entry a value to squared: ");
    scanf("%d", &x);
    result = cos(x);
    printf("The result of %d is: %f",x,result);
    return 0;
}

