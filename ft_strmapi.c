#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i = 0;
	char *str;

	if (!s || !f)
		return (NULL);

	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);

	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return str;
}
