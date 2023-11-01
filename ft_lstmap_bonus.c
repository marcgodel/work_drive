#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;

	if (lst == 0 && f == 0 && del == 0)
		return (0);

	new_list = NULL;
	while (lst != 0)
	{
		new_element = ft_lstnew((*f)(lst->content));
		if (new_element == 0)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;

	}
	return (new_list);
}
