#include "libft.h"
void	*ft_strtoupper(void *str);

void	*ft_strtoupper(void *str)
{
	int	i;
	i = 0;
	unsigned char *string = (unsigned char *)str;
	unsigned char c;

	while (string[i])
	{
		c = (unsigned char)string[i];
		if (c >= 'a' && c <= 'z')
		c = (c - 32);
		string[i] = c;
		i++;
	}
	str = (void *)string;
	return (str);
}

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != 0)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}


int	isempty(t_list *lst)
{
	if (lst == 0)
		return (1);
	return (0);
}

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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
	return;
}


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

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del != 0 || lst != 0)
	{
		(*del)(lst->content);
		free(lst);
	}
	return;
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != 0 || f != 0)
	{
		while (lst != 0)
		{
			(*f)(lst->content);
			lst = lst->next;
		}
	}
	return;
}

t_list	*ft_lstlast(t_list *lst)
{
	if (lst != 0)
	{
		while (lst->next != 0)
			lst = lst->next;
	}
	return (lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_ele;

	if (lst == 0 && f == 0 && del == 0)
		return (0);
	new_list = lst;
	new_ele = NULL;
	new_ele = malloc(sizeof(*new_ele));
	if (new_ele == 0)
	{
		free(new_ele);
		return (NULL);
	}
	while (lst != 0)
	{
		new_ele->content = (*f)(lst->content);
		(*del)(lst->content);
		new_ele->next = lst->next;
		lst = lst->next;
	}
	free(lst);
	return (new_list);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = malloc(sizeof(t_list));
	if (new_element == NULL)
		return (NULL);
	new_element->content = content;
	new_element->next = (NULL);
	return (new_element);
}






void	*delete(void *element)
{
	free(element);
	return (NULL);
}

void	print_list(t_list *list)
{
	if (list == 0)
	{
		printf("list vide");
		return;
	}
	while (list != 0)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
	return;
}	

int	main()
{
	char	*name = "Marc";
	char	*surname = "Godel";
	char	*back_name = NULL;
	t_list 	*info;
	t_list	*test;	
	t_list	*elem3;
	t_list	*elem4;
	t_list	*elem5;
	t_list	*elem6;
	t_list	*elem7;
	t_list	*elem8;
	info = NULL;
	test = NULL;
	info = ft_lstnew(name);
	test = ft_lstnew(surname);
	elem3 = ft_lstnew("33");
	elem4 = ft_lstnew("44");
	elem5 = ft_lstnew("55");
	elem6 = ft_lstnew("66");	
	elem7 = ft_lstnew("77");	
	elem8 = ft_lstnew("88");
	printf("%p\n", info->content);
	back_name = (char *)info->content;
	printf("%s\n", back_name);
	printf("add element 99 at the start of the list\n");

	ft_lstadd_front(&info, test);
	ft_lstadd_front(&info, elem3);
	ft_lstadd_back(&info, elem5);
	ft_lstadd_back(&info, elem6);
	ft_lstadd_front(&info, elem4);
	ft_lstadd_back(&info, elem7);
	ft_lstadd_back(&info, elem8);
	print_list(elem4);

ft_lstmap(info, ft_strtoupper(info), delete(info));


	return (0);
}
