#include "libft.h"
#include <stdio.h>
char *strnstr(const char *str, const char *to_find, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (to_find[0] == '\0')
        return ((char *)str);
    while (str[i] && (i < len))
    {
        j = 0;
        while (str[i + j] == to_find[j] && (i + j) < len)
        {
            if (to_find[j + 1] == '\0')
                return ((char *)(&str[i]));
            j++;
        }
        i++;
    }
    return (NULL);    
}
