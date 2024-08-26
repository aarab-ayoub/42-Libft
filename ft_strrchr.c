#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char ch = (char)c;
    char *last_occurrence = NULL;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ch)
            last_occurrence = (char *)(s + i);
        i++;
    }

    if (s[i] == ch)
        last_occurrence = (char *)(s + i);

    return last_occurrence;
}
