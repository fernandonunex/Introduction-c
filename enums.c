#include<stdio.h> 


enum months{January, February, March, April, May, June, July, August, September, October, November, December};

enum army 
{
    ak47 = 120,
    ak117 = 100,
    m16 = 130,
    msmc = 80,

    
} guns;

int main(int argc, char const *argv[])
{
/*     enum months xmas;
    xmas = December;
    printf("XMAS is the %dth month.", xmas+1); */

    guns = m16;
    printf("The damage of m16 is %d", sizeof(guns));
    return 0;
}