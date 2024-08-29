#include "libft.h"

void *ft_memset( void *pointer, int value, size_t count)
{
	size_t  i;
    unsigned char *ptr;

    ptr = (unsigned char *)pointer;
    i = 0;
    while (i < count)
    {
        ptr[i] = (unsigned char)value;
        i++;
    }
    return (ptr);
}
