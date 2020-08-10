#include<stdio.h>
#include<string.h>

// Variables Declaration
extern int variable_extern;
int money = -400;
int result;
float p ,i, k;
enum  sides{
    high = 3,
    deep = 12,
    length =0,
} cube;

char leter;
char my_name[] = "Fernando";




int main()
{   
    // Variable definition
    int variable_extern;
    // Variable Inizalization int
    int test = -50;
    variable_extern = -10;
    cube = length;
    result = money + test + variable_extern;
    printf("Something int %d", result);


    // Variable inizalization float
    p = -500.955;
    i = -985.352;
    k = p + i;
    printf("\n Something int %f", k);

    // Variable inizialization char
    leter = 'H';
    printf("\n Something char %c \n", leter);

    // Using strings
    printf("This is my name %s \n", my_name);

/*     char name[10];
    int age;
    printf("Enter your first name and age: \n");
    scanf("%s %d", name, &age); 
    printf("You entered: %s %d",name,age);

 */

    return 0;
}
