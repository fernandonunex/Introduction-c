#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number_1;
    int number_2;
    printf("Enter number 1: ");
    scanf("%d", &number_1);
    printf("Enter number 2: ");
    scanf("%d", &number_2);

    if ( number_1 > number_2)
        printf("The number 1: %d is bigger than the number 2: %d", number_1,  number_2);
    else if (number_1 < number_2)
        printf("The number 1: %d is smaller than the number 2: %d", number_1,  number_2);
    else
        printf("The number 1: %d is equal to the number 2: %d", number_1,  number_2);

    



    return 0;
}



