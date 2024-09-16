#include "libft.h"


void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	size_t *ptr;
	if (!lst || !del)
		return ;
	
	del(lst->content);
	free(lst);
}

