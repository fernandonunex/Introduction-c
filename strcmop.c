#include<stdio.h>
#include<string.h>

char string1[60];

char string2[60];

int main()
{
    printf("Write a phrase to compare : ");
    gets(string1);
    printf("Write a second phrase to compare : \n");
    gets(string2);
    
    if (strcmp(string1, string2) == 0)
        printf("The phrases are the same\n");
    else{
        strcat(string1,string2);
        printf("The phrases are diferents, and concatened: %s\n", string1);
    }
    

    return 0;
}
