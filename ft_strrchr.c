/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:46:57 by ayaarab           #+#    #+#             */
/*   Updated: 2024/10/30 19:32:44 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	size_t	len;

	len = ft_strlen(string);
	while (len > 0)
	{
		if (string[len] == (char)searchedChar)
			return ((char *)string + len);
		len--;
	}
	if (string[0] == (char)searchedChar)
		return ((char *)string);
	return (NULL);
}
