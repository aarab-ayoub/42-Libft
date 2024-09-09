#include "libft.h"

int set_in(char c, char const *set)
{
	size_t i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return 1;
		i++;
	}
	return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
	if (!s1 || !set)
		return NULL;

	size_t start = 0;
	size_t end = ft_strlen(s1);
	char *trimmed_str;

	while (s1[start] && set_in(s1[start], set))
		start++;

	if (start == end)
		return ft_strdup("");

	while (end > start && set_in(s1[end - 1], set))
		end--;

	trimmed_str = (char *)malloc(end - start + 1);
	if (!trimmed_str)
		return NULL;

	ft_memcpy(trimmed_str, s1 + start, end - start);
	trimmed_str[end - start] = '\0';
	return trimmed_str;
}

// int main()
// {
// 	char *s1 = "!!@@Hello!@@";
// 	char *set = "!@l";
// 	char *result = ft_strtrim(s1, set);
// 	if (result)
// 	{
// 		printf("%s", result);
// 		free(result);
// 	}
// }
