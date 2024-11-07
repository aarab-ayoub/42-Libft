/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:50:56 by ayaarab           #+#    #+#             */
/*   Updated: 2024/10/31 21:11:03 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_in(char c, const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	size_t	j;
	char	*trim;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (s1[i] && set_in(s1[i], set))
		i++;
	if (i >= end)
		return (ft_strdup(""));
	while (end > i && set_in(s1[end], set))
		end--;
	trim = malloc(end - i + 2);
	if (!trim)
		return (NULL);
	j = 0;
	while (i <= end)
		trim[j++] = s1[i++];
	trim[j] = '\0';
	return (trim);
}
