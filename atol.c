#include <stdlib.h>

int errorflag = 0;

long atol(char *str, int *errorflag)
{
    int sign = 1;
    long result = 0;

    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
        {
            sign = -1;
        }
        str++;
    }

    while(*str != '\0')
    {
        if (*str < 48 || *str > 57)
        {
            *errorflag = 1;
            return(0);
        }
        else
        {
            was_digit_added = 1;
            result = (result * 10) + (*str - '0');
            str++;
        }
    }
    result = result * sign;
    if (result > 2147483647 || result < -2147483648)
    {
        *errorflag = 1;
        return(0);
    }
    else
    {
        return(result);
    }
}
