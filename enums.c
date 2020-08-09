#include<stdio.h> 


enum months{January, February, March, April, May, June, July, August, September, October, November, December};

int main(int argc, char const *argv[])
{
    enum months xmas;
    xmas = December;
    printf("XMAS is the %dth month.", xmas+1);
    return 0;
}