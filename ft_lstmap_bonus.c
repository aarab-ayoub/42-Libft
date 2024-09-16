#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_lst;
    t_list *new_node;
    t_list *last_node;

    if (!lst || !f || !del)
        return (NULL);
    
    new_lst = NULL;
    last_node = NULL;
    
    while (lst)
    {
        new_node = ft_lstnew(f(lst->content));
        if (!new_node)
        {
            ft_lstclear(new_lst, del);
            return (NULL);
        }
        if (last_node)
        {
            last_node->next = new_node;
        }
        else
        {
            new_lst = new_node;
        }
        last_node = new_node;
        lst = lst->next;
    }
    return (new_lst);
}
