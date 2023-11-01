#include "libft.h"
#include "test_libft.h"

/*____________________________________________________________________________*/
/*----------------------- ft strlcat -----------------------------------------*/
/*_______ test fonction original ______*/

/*
	back_c = 0;
	string_b = NULL;
	string_c = NULL;
	length_t = 16;
	back_a = strlcat(dest_o, string_const, length_t);
	back_b = strlcat(big_buffer_a, string_const, length_t);
	back_c = strlcat(string_b, string_const, length_t);

	i = ft_strlcat(dest_ft, string_const, length_t);
	j = ft_strlcat(big_buffer_ft, string_const, length_t);
	k = ft_strlcat(string_c, string_const, length_t);

	if(back_a == i && back_b == j && back_c == k)
		printf("length ok");
	else
	{
		printf("length error");
		return (1);
	}
	while (dest_o[i] == dest_ft[i] && i >= 0)
		i--;
	while (big_buffer_a[j] == big_buffer_ft[j] && j >= 0)
		j--;
	while (string_b[k] == string_c[k] && k >= 0)
		k--;
	if (j < 0 && i < 0 && k < 0)
		printf("OK--ft_strlcat--OK\n\n");
	else
	{
		printf("error ft_strlcat");
		return(1);
	}
	printf("OK--ft_strlcat--OK\n\n");

*/