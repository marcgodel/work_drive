#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*first_ele;
	t_list	*temp;

	first_ele = *lst;
	if (lst != 0)
	{
		if (*lst != 0)
		{
			while (first_ele != 0)
			{
				temp = first_ele;
				first_ele = first_ele->next;
			}
			temp->next = new;
			return;
		}
		*lst = new;
	}
	return;
}
