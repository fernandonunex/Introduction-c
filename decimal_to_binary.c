#include<stdio.h>
#include<stdlib.h>

int binary_numbers[12],i,n;
int o;
int main()
{
/*     system("cls");
    system("color 9F"); */
    printf("Enter a decimal number:");
    scanf("%d",&n);
    printf("The number %d will be changed to binary \n", n);

    for (i = 0; n > 0; i++)
    {
        printf("n = %d \n", n);
        binary_numbers[i] = n%2;
        n = n/2;
    }

    printf("The result is:\n");

    for ( i = i-1; i >= 0; i--)
    {
        printf("%d", binary_numbers[i]);
    }
    
    return 0;
}
