#include <string.h>
#include <math.h>

int bytes_for_int(unsigned int max_value)
{
    for (size_t i = 1; i <= 4; i++)
    {
        unsigned int x = pow(2,8*i)-1;
        if(max_value<=x)
        {
            return i;
        }
    }
    return -1;
}