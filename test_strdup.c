#include "libft.h"
#include "test_libft.h"

/*____________________________________________________________________________*/

/*----------------------- ft trdup  -----------------------------------------*/
/*_______ test fonction original ______*/
	string_b = NULL;
	string_c = NULL;
	printf("test ft_strdup\n\n");
	string_b = strdup(string_const);
	printf("origin strdup\n%s\n", string_b);
	string_c = ft_strdup(string_const);
	printf("ft_strdup\n%s\n", string_c);
	if(*string_b != *string_c)
	{
		printf("error ft_strdup 1\n");
		return(1);
	}
	i = 0;
	j = ft_strlen(string_const);
	while(i < j)
	{
		if(string_b[i] != string_c[i])
		{
			printf("error ft_strdup 2\n");
			return(1);
		}
		i++;
	}
	string_b = strdup(str_const);
	printf("origin strdup\n%s\n", string_b);
	string_c = ft_strdup(str_const);
	printf("ft_strdup\n%s\n", string_c);
	if(*string_b != *string_c)
	{
		printf("error ft_strdup 3\n");
		return(1);
	}
	i = 0;
	j = ft_strlen(str_const);
	while(i < j)
	{
		if(string_b[i] != string_c[i])
		{
			printf("error ft_strdup 4\n");
			return(1);
		}
		i++;
	}
	printf("OK--ft_strdup--OK\n\n");