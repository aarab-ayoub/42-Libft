#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char *copy_word(const char *src, int len)
{
    char *word = (char *)malloc((len + 1) * sizeof(char));
    if (!word)
        return NULL;
    ft_memcpy(word, src, len);
    word[len] = '\0';
    return word;
}

int count_word(const char *str, char c)
{
    int i = 0;
    int in_word = 0;
    int count = 0;
    while (str[i])
    {
        if (str[i] == c)
            in_word = 0;
        else if (!in_word)
        {
            count++;
            in_word = 1;
        }
        i++;
    }
    return count;
}

char **ft_split(char const *s, char c)
{
    int i = 0;
    int j;
    int p = 0;
    int word_count = count_word(s, c);
    char **alloc_str = (char **)malloc((word_count + 1) * sizeof(char *));
    
    if (!alloc_str)
        return NULL;

    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] == '\0')
            break;
        j = i;
        while (s[i] && s[i] != c)
            i++;
        int len = i - j;
        alloc_str[p] = copy_word(&s[j], len);
        if (!alloc_str[p]) 
        {
            while (p > 0)
                free(alloc_str[--p]);
            free(alloc_str);
            return NULL;
        }
        p++;
    }
    alloc_str[p] = NULL;
    return alloc_str;
}

int main()
{
    char str[] = "       hello\tlkjh\n world    example";
    char **result = ft_split(str, ' ');

    if (result)
    {
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("%s\n", result[i]);
            free(result[i]);
        }
        free(result);
    }

    return 0;
}
