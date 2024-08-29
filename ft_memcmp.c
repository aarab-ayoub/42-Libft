#include "libft.h"


int ft_memcmp( const void * pointer1, const void * pointer2, size_t size )
{
	size_t i;
    unsigned char *p1;
    unsigned char *p2;

    p1 = (unsigned char *) pointer1;
    p2 = (unsigned char *) pointer2;
    i = 0;
    while ((p1[i] || p2[i]) && i < size)
    {
       if (p1[i] != p2[i])
       {
        return (p1[i] - p2[i]);
       }
       i++;   
    }
    return 0;
}

