/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:03:43 by ayaarab           #+#    #+#             */
/*   Updated: 2024/10/30 21:37:48 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	while (*string)
	{
		if (*string == (unsigned char)searchedChar)
			return ((char *)string);
		string++;
	}
	if (*string == (unsigned char)searchedChar)
		return ((char *)string);
	return (NULL);
}
