#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;

    char ch = (char)c;

    while (s[i] != '\0')
    {
        if (s[i] == ch)
            return (s + i);
        i++;
    }
    
    if (s[i] == ch)
        return (s + i);

    return NULL;
}
