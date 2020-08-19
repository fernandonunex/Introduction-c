#include<time.h>
#include<stdlib.h>

time_t seconds;

int main()
{
    

    seconds = time(NULL);
    printf("The number of hours since EPOC 1st of January of 1970 at 00:00 is: %ld \n", seconds/3600 );
    return 0;
}
