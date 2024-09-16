#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *ptr;
	t_list *next_node;

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