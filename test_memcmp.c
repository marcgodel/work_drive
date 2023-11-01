#include "libft.h"
#include "test_libft.h"

/*____________________________________________________________________________*/

/*----------------------- ft memcmp  -----------------------------------------*/
/*_______ test fonction original ______*/
	printf("start memcmp\n");

	length_t = 10;
	i = memcmp(string_const, str_const, length_t);
	j = ft_memcmp(string_const, str_const, length_t);
	if (i != j)
	{
		printf("error ft_memcmp 1\n");
		return (1);
	}

	length_t = 3;
	i = memcmp(string_const, str_const, length_t);
	j = ft_memcmp(string_const, str_const, length_t);
	if (i != j)
	{
		printf("error ft_memcmp 1\n");
		return (1);
	}
	length_t = 0;
	i = memcmp(string_const, str_const, length_t);
	j = ft_memcmp(string_const, str_const, length_t);
	if (i != j)
	{
		printf("error ft_memcmp 1\n");
		return (1);
	}
	length_t = 15;
	i = memcmp(string_const, str_const, length_t);
	j = ft_memcmp(string_const, str_const, length_t);
	if (i != j)
	{
		printf("error ft_memcmp 1\n");
		return (1);
	}
	printf("OK--ft_memcmp--OK\n\n");