/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:46:32 by ayaarab           #+#    #+#             */
/*   Updated: 2024/11/02 19:46:44 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char *str, char c)
{
	int	in_word;
	int	count;
	int	i;

	in_word = 0;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*copy_word(char *str, int len)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	free_alloc(char **alloc, int j)
{
	while (j >= 0)
	{
		free(alloc[j]);
		j--;
	}
	free(alloc);
}

static int	find_next_word(char const *str, char c, int *start)
{
	size_t	i;

	i = *start;
	while (str[i] && str[i] == c)
		i++;
	*start = i;
	while (str[i] && c != str[i])
		i++;
	return (i - *start);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		len;
	int		start;
	char	**alloc;

	j = 0;
	start = 0;
	if (!s)
		return (NULL);
	alloc = malloc((count_word((char *)s, c) + 1) * sizeof(char *));
	if (!alloc)
		return (NULL);
	while (s[start])
	{
		len = find_next_word(s, c, &start);
		if (len > 0)
		{
			alloc[j++] = copy_word((char *)&s[start], len);
			if (!alloc[j - 1])
				return (free_alloc(alloc, j - 1), NULL);
			start += len;
		}
	}
	return (alloc[j] = NULL, alloc);
}
