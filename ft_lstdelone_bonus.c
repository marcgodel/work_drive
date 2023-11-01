#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del != 0 || lst != 0)
	{
		(*del)(lst->content);
		free(lst);
	}
	return;
}
