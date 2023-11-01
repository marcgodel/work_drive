#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ele_point;
	t_list	*next_temp;

	if (del != 0 && lst != 0 && *lst != 0)
	{
		ele_point = *lst;
		while (ele_point->next != 0)
		{
			next_temp = ele_point->next;
			(*del)(ele_point->content);
			free(ele_point);
			ele_point = next_temp;
			next_temp = next_temp->next;
		}
		(*del)(ele_point->content);
		free(ele_point);
		*lst = (NULL);
	}
	return;
}
