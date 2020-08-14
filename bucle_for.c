#include <stdio.h>

int main()
{
    int i;
    int count=0;
    printf("Entry a value: ");
    scanf("%d", &count);
    for (i = 0; i < count ; i++)
    {
        printf("The value of i: %d \n", i);
    }
    


    return 0;
}
