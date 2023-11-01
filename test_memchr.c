#include "libft.h"
#include "test_libft.h"

/*____________________________________________________________________________*/

/*----------------------- ft memchr  -----------------------------------------*/
/*_______ test fonction original ______*/
/*	i =  0;
	k = 'u';
	length_t = 40;
	while(str_const[i])
	{
		buffer_int_a[i] = str_const[i];
		i++;
	}
	point_a = NULL;
	point_b = NULL;
	printf("test ft_memchr -1-\n");
	point_a = memchr(buffer_int_a, k, length_t);
	printf("%p,\n", point_a);
	printf("%ls,\n", point_a);
	printf("%d,\n", *point_a);
	printf("ft_memchr\n");
	point_b = ft_memchr(buffer_int_a, k, length_t);
	printf("%p,\n", point_b);
	printf("%ls,\n", point_b);
	printf("%d,\n", *point_b);
	if (point_a != point_b)
	{
		printf("error ft_mechr -1-");
		return(1);
	}
	printf("test ft_memchr -2-\n");
	k = 'i';
	length_t = 40;
	point_a = memchr(buffer_int_a, k, length_t);
	printf("%p,\n", point_a);
	printf("%ls,\n", point_a);
//	printf("%d,\n", *point_a);
	printf("ft_memchr\n");
	point_b = ft_memchr(buffer_int_a, k, length_t);
	printf("%p,\n", point_b);
	printf("%ls,\n", point_b);
//	printf("%d,\n", *point_b);
	if (point_a != point_b)
	{
		printf("error ft_mechr -2-");
		return(1);
	}

	printf("test ft_memchr -3-\n");
	k = 'u';
	length_t = 28;
	point_a = memchr(buffer_int_a, k, length_t);
	printf("%p,\n", point_a);
	printf("%ls,\n", point_a);
//	printf("%d,\n", *point_a);
	printf("ft_memchr\n");
	point_b = ft_memchr(buffer_int_a, k, length_t);
	printf("%p,\n", point_b);
	printf("%ls,\n", point_b);
//	printf("%d,\n", *point_b);
	if (point_a != point_b)
	{
		printf("error ft_mechr -3-");
		return(1);
	}
	printf("test ft_memchr -4-\n");
	k = 'u';
	length_t = 29;
	point_a = memchr(buffer_int_a, k, length_t);
	printf("%p,\n", point_a);
	printf("%ls,\n", point_a);
	printf("%d,\n", *point_a);
	printf("ft_memchr\n");
	point_b = ft_memchr(buffer_int_a, k, length_t);
	printf("%p,\n", point_b);
	printf("%ls,\n", point_b);
	printf("%d,\n", *point_b);
	if (point_a != point_b)
	{
		printf("error ft_mechr -4-");
		return(1);
	}
	printf("OK--ft_memchr--OK\n\n");
	*/