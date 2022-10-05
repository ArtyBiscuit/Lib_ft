#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;

	while (lst)
	{
		ft_lstadd_back(&new, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	return (new);
}
