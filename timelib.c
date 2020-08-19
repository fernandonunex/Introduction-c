#include<time.h>
#include<stdlib.h>

time_t begin, end;

int main()
{
    
    long i;
    begin = time(NULL);
    for ( i = 0; i < 1000000000; i++);
    end = time(NULL);
    printf("The time of execution is: %f \n",difftime(end,begin) );
    return 0;
}
