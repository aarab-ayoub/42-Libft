#include "libft.h"

int ft_atoi(const char* ptr)
{
	int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while (ptr[i] == 32 || (ptr[i] >= 9 && ptr[i] <= 13))
    {
        i++;
    }
    if (ptr[i] == '-' || ptr[i] == '+')
    {
        if (ptr[i] == '-')
            sign *= -1;
        i++;
    }
    while (ptr[i] >= '0' && ptr[i] <= '9')
    {
        result = result * 10 + (ptr[i] - '0');
        i++;
    }
    return result * sign;
}
