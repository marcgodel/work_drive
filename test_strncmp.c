#include "libft.h"
#include "test_libft.h"

/*____________________________________________________________________________*/

/*----------------------- ft strncmp -----------------------------------------*/
/*_______ test fonction original ______*/
	printf("\ntest ft_strncmp\n\n");

	length_t = 10;
	i = strncmp(string_const, str_const, length_t);
	j = ft_strncmp(string_const, str_const, length_t);
	if (i != j)
	{
		printf("error ft_strncmp 1\n");
		return (1);
	}

	length_t = 3;
	i = strncmp(string_const, str_const, length_t);
	j = ft_strncmp(string_const, str_const, length_t);
	if (i != j)
	{
		printf("error ft_strncmp 1\n");
		return (1);
	}
	length_t = 0;
	i = strncmp(string_const, str_const, length_t);
	j = ft_strncmp(string_const, str_const, length_t);
	if (i != j)
	{
		printf("error ft_strncmp 1\n");
		return (1);
	}
	length_t = 15;
	i = strncmp(string_const, str_const, length_t);
	j = ft_strncmp(string_const, str_const, length_t);
	if (i != j)
	{
		printf("error ft_strncmp 1\n");
		return (1);
	}
	printf("\nft_strncmp avec -1 en size_t\n\n");

printf("%d\n", ft_strncmp("1234", "12345", -1));
	printf("\nstrncmp avec -1 en size_t\n\n");

printf("%d\n", strncmp("1234", "12345", -1));

	printf("OK--ft_strncmp--OK\n\n");