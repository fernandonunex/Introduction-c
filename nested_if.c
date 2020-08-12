#include<stdio.h>

int option_1 = 0;
int option_2 = 0;


int main(int argc, char const *argv[])
{
    // This program create menues
    printf("Welcome to Bugattie Store: \n 0: Bugatti Models \n 1: Bugatti Prices \n 2: Bugatti Speed limit \n  ");
    printf("*****************************************\n");
    printf("Please, entre a numeric value: ");
    scanf("%d", &option_1);


    if (option_1 == 0)
    {
        printf("You have selected to see our Bugatti Models \n");
        printf("*****************************************\n");
        printf("Enter a numeric value to see our models: \n 0\n 1\n 2\n 3\n 4 \n");
        scanf("%d", &option_2);

        if (option_2 == 0)
            printf("Bugatti Chiron");
        else if (option_2 == 1)
            printf("Bugatti Chiron Super Sport");
        else if (option_2 == 2)
            printf("Bugatti Chiron Pur Sport");
        else if (option_2 == 3)
            printf("Bugatti Chiron Divo");   
        else if (option_2 == 4)
            printf("Bugatti Chiron Lavolturie");
        else
            printf("Please, enter a numeric value: 1, 2, 3, 4");
    }
    else if (option_1 == 1)
    {
        printf("You have selected to see our Bugatti Prices \n");
        printf("*****************************************\n");
        printf("Enter a numeric value to see our Prices:\n 0\n 1\n 2\n 3\n 4 \n");
        scanf("%d", &option_2);

        if (option_2 == 0)
            printf("2.4 Millions USD");
        else if (option_2 == 1)
            printf("3 Millions USD");
        else if (option_2 == 2)
            printf("4 Million USD");
        else if (option_2 == 3)
            printf("5 Million USD");   
        else if (option_2 == 4)
            printf("17 Million USD");
        else
            printf("Please, enter a numeric value: 1, 2, 3, 4");
    }

    else if (option_1 == 2)
    {
        printf("You have selected to see our Bugatti Speed Limit \n");
        printf("*****************************************\n");
        printf("Enter a numeric value to see our Speed Limit: \n 0\n 1\n 2\n 3\n 4 \n");
        scanf("%d", &option_2);

        if (option_2 == 0)
            printf("300 km/h");
        else if (option_2 == 1)
            printf("320 km/h");
        else if (option_2 == 2)
            printf("350 km/h");
        else if (option_2 == 3)
            printf("400+ km/h");   
        else if (option_2 == 4)
            printf("Not tested");
        else
            printf("Please, enter a numeric value: 1, 2, 3, 4");
    }
    else
        printf("Please, enter a numeric value: 1, 2, 3, 4");


    
    return 0;
}
