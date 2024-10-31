/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:46:30 by ayaarab           #+#    #+#             */
/*   Updated: 2024/10/28 19:28:08 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_nb(int nb)
{
	int	l;

	l = 0;
	if (nb < 0)
	{
		nb *= -1;
		l += 1;
	}
	while (nb > 0)
	{
		nb /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int nbr)
{
	long	nb;
	int		len;
	char	*place;
	int		i;

	nb = nbr;
	len = len_nb(nb);
	place = malloc((len + 1) * sizeof(char));
	if (place == NULL)
		return (NULL);
	place[len] = '\0';
	if (nb == 0)
	{
		place[0] = '0';
		return (place);
	}
	if (nb < 0)
	{
		place[0] = '-';
		nb *= -1;
	}
	i = len - 1;
	while (nb > 0)
	{
		place[i] = (nb % 10) + 48;
		nb /= 10;
		i--;
	}
	return (place);
}
