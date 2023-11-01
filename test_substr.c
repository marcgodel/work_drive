#include "libft.h"
#include "test_libft.h"

/*____________________________________________________________________________*/

/*----------------------- ft substr  -----------------------------------------*/
/*_______ test fonction original ______*/
/*

	string_b = NULL;
	string_c = NULL;
	printf("test ft_substr\n\n");
	string_b = substr(string_const, 4, length_t);
	printf("origin substr\n%s\n", string_b);
	string_c = ft_substr(string_const, 4, length_t);
	printf("ft_substr\n%s\n", string_c);
	if(*string_b != *string_c)
	{
		printf("error ft_substr 1\n");
		return(1);
	}
	i = 0;
	j = ft_strlen(string_const);
	while(i < j)
	{
		if(string_b[i] != string_c[i])
		{
			printf("error ft_substr 2\n");
			return(1);
		}
		i++;
	}
	string_b = substr(str_const, 4, length_t);
	printf("origin substr\n%s\n", string_b);
	string_c = ft_substr(str_const, 4, length_t);
	printf("ft_substr\n%s\n", string_c);
	if(*string_b != *string_c)
	{
		printf("error ft_substr 3\n");
		return(1);
	}
	i = 0;
	j = ft_strlen(str_const);
	while(i < j)
	{
		if(string_b[i] != string_c[i])
		{
			printf("error ft_substr 4\n");
			return(1);
		}
		i++;
	}
*/
	length_t = 8;
	string_b = NULL;
	string_c = NULL;
	printf("test ft_substr\n\n");
	printf("whith <%s>, start = 4, len = 8", string_const);
	string_c = ft_substr(string_const, 4, length_t);
	printf("ft_substr\n%s\n", string_c);
	length_t = 4;
	string_c = ft_substr(str_const, 4, length_t);
	printf("whith <%s>, start = 4, len = 4", str_const);
	printf("ft_substr 2\n%s\n", string_c);

	printf("OK--ft_substr--OK\n\n");
