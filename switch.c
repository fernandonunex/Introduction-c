#include <stdio.h>


int option_1 = 0;
int option_2 = 0;

int main()
{
    printf("Welcome to Bugattie Store: \n 0: Bugatti Models \n 1: Bugatti Prices \n 2: Bugatti Speed limit \n  ");
    printf("*****************************************\n");
    printf("Please, entre a numeric value: ");
    scanf("%d", &option_1);

    switch (option_1)
    {
    case 0:
        printf("You have selected to see our Bugatti Models \n");
        printf("*****************************************\n");
        printf("Enter a numeric value to see our models: \n 0\n 1\n 2\n 3\n 4 \n");
        scanf("%d", &option_2);
        switch (option_2)
        {
        case 0:
            printf("Bugatti Chiron");
            break;
        case 1:
            printf("Bugatti Chiron Super Sport");
            break;
        case 2:
            printf("Bugatti Chiron Pur Sport");
            break;
        case 3:
            printf("Bugatti Chiron Divo");   
            break;
        case 4:
            printf("Bugatti Chiron Lavolturie");   
            break;
        default:
            printf("Please, enter a numeric value: 1, 2, 3, 4");
            break;
        }
        break;


    case 1:
        printf("You have selected to see our Bugatti Prices \n");
        printf("*****************************************\n");
        printf("Enter a numeric value to see our Prices:\n 0\n 1\n 2\n 3\n 4 \n");
        scanf("%d", &option_2);
        switch (option_2)
        {
        case 0:
            printf("Bugatti Chiron : 2M");
            break;
        case 1:
            printf("Bugatti Chiron Super Sport: 3M");
            break;
        case 2:
            printf("Bugatti Chiron Pur Sport: 4M");
            break;
        case 3:
            printf("Bugatti Chiron Divo: 5M");   
            break;
        case 4:
            printf("Bugatti Chiron Lavolturie: 17M");   
            break;
        default:
            printf("Please, enter a numeric value: 1, 2, 3, 4");
            break;
        }
        break;

    case 2:
        printf("You have selected to see our Bugatti Speed Limit \n");
        printf("*****************************************\n");
        printf("Enter a numeric value to see our Speed Limit: \n 0\n 1\n 2\n 3\n 4 \n");
        scanf("%d", &option_2);
        switch (option_2)
        {
        case 0:
            printf("300 km/h");
            break;
        case 1:
            printf("320 km/h");
            break;
        case 2:
            printf("350 km/h");
            break;
        case 3:
            printf("400+ km/h");    
            break;
        case 4:
            printf("Not tested");
            break;
        default:
            printf("Please, enter a numeric value: 1, 2, 3, 4");
            break;
        }
        break;

    default:
        printf("Somthing went wrong, try again");
        break;
}
    return 0;
}

