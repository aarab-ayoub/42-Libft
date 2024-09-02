#include "libft.h"

void *ft_memchr(void * ptr, int value, size_t num)
{
	unsigned char *pointer;
    size_t i;

    i = 0;
    pointer = (unsigned char*) ptr;
    while (i < num)
    {
        if (pointer[i] == (unsigned char)value)
           return ((void *)pointer + i);
        i++;
    }
    return (NULL);
}
