#include<stdio.h>

const int OMENCOST = 30000u;
// u and l can be used to denote unsigned or long.
const float EXCHANGE = 45.2;
const char NEWLINE = '\n';  

# define ROOMS 4 
# define COSTPERROOM 50.99

int main(int argc, char const *argv[])
{
    printf("The number of rooms in the house are: %d %c", ROOMS, NEWLINE);
    printf("The cost for a room in the house is: %f %c", COSTPERROOM, NEWLINE);
    printf("The total cost of all rooms in the house is: %f %c", ROOMS*COSTPERROOM, NEWLINE);


    return 0;
}
