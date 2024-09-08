#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t s1_len = ft_strlen(s1);
	size_t s2_len = ft_strlen(s2);
	char *str;
	size_t i;

	if (!s1 || !s2)
		return (NULL);

	str = (char *)malloc(s1_len + s2_len + 1);
	if (!str)
		return (NULL);

	i = 0;
	ft_memcpy(str, s1, s1_len);
	ft_memcpy(str + s1_len, s2, s2_len);
	str[s1_len + s2_len] = '\0';
	return (str);
}
