#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dest_len;
    size_t src_len;
    size_t i;

    dest_len = ft_strlen(dst);
    src_len = ft_strlen(src);

    if (dest_len >= size)
        return (src_len + size);

    i = 0;
    while (src[i] && (dest_len + i < size - 1))
    {
        dst[dest_len + i] = src[i];
        i++;
    }
    dst[dest_len + i] = '\0';
    return (dest_len + src_len);
}
