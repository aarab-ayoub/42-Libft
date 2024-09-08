#include "libft.h"


void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
    unsigned char *dst;
    unsigned char *source;

    dst = (unsigned char *) dest;
    source = (unsigned char *) src;
    
    if (!dst && !source)
        return (0);
    i = 0;
    while (i < n)
    {
        dst[i] = source[i];
        i++;
    }
    return (dest);
}
