#include "libft.h"

void* ft_calloc (size_t num, size_t size)
{
	size_t i;
	size_t n;
    char *calloc_mem;

    i = 0;
    n = num * size;
    calloc_mem = (char *)malloc(n);
    if (!calloc_mem)
        return (NULL);
    ft_bzero(calloc_mem, n);
    return ((void *)calloc_mem);
}
