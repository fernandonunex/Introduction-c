#include <stdio.h>

int main()
{
    int n = 0;
    printf("How many times do you want to print the sentence: ");
    scanf("%d", &n);
    do
    {
        printf("Cycle number: %d \n",n);
        n--;
    } while (n > 0);
    
    return 0;
}
