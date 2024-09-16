#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    size_t i = 0;    
    if (!lst)
        return NULL;
    
    while (lst->next)
       lst = lst->next;
    return lst;
}