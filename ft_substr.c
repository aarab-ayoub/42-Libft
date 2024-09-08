#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t str_len;
    char *substr;

    str_len = ft_strlen(s);
    i = 0;

    if (!s)
        return (NULL);
    if (start >= str_len)
        return ("");

    if (len > str_len - start)
        len = str_len - start;
    
    substr = malloc(len + 1);
    if (!substr)
        return (NULL);
    
    while (i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';

    return (substr);
}
