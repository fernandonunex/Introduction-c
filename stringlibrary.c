#include<stdio.h>
#include<string.h>

int main()
{
    char string1[5];
    printf("Write a something to reverse : ");
    gets(string1);
    strrev(string1);

    printf("The reverse string is : %s \n ", string1);

    return 0;
}
