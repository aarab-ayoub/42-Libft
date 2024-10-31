/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:08:28 by ayaarab           #+#    #+#             */
/*   Updated: 2024/10/30 19:59:01 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	ptr = *lst;
	while (ptr)
	{
		next_node = ptr->next;
		del(ptr->content);
		free(ptr);
		ptr = next_node;
	}
	*lst = NULL;
}
