#include "libft.h"
#include "test_libft.h"

/*____________________________________________________________________________*/
/*----------------------- ft memcpy  -----------------------------------------*/
/*_______ test fonction original ______*/


	printf("\ntest memcpy\n");
	length_t = 10;
	point_a = memcpy(big_buffer_a, string_const, length_t);

	i = 0;
	while (point_a[i])
		write(1, &point_a[i++], 1);
	write(1, "\n", 1);
	point_b = ft_memcpy(big_buffer_ft, string_const, length_t);

	i = 0;
	while (point_b[i])
		write(1, &point_b[i++], 1);
	write(1, "\n", 1);

	printf("same text ?\n\n");
	i = 0;
	while (point_a[i] == point_b[i] && point_a[i] && point_b[i])
		i++;
	if (point_a[i - 1] == point_b[i - 1])
			printf("test 1 OK\n");
	else
	{
		printf("error test 1 memcpy");
		return (1);
	}
// difference de retour avec un pointeur int et un pointeut char//
// (saut car 4 bytes pout un integer.)

	length_t = 10;
	string_b = memcpy(big_buffer_a, string_const, length_t);

	i = 0;
	while (string_b[i])
		write(1, &string_b[i++], 1);
	write(1, "\n", 1);
	string_c = ft_memcpy(big_buffer_ft, string_const, length_t);

	i = 0;
	while (string_c[i])
		write(1, &string_c[i++], 1);
	write(1, "\n", 1);

	printf("same text ?\n\n");

	i = 0;
	while (point_a[i] == point_b[i] && point_a[i] && point_b[i])
		i++;
	if (point_a[i - 1] == point_b[i - 1])
		printf("test 2 OK\n");
	else
	{
		printf("error test 2 memcpy\n");
		return (1);
	}

	printf("\ntest memcpy null orgiginal memcpy\n");

	char *point_null = NULL;
	char *point_nullb = NULL;
	length_t = 0;
	printf("null null length\n%s", string_b = memcpy(point_null, point_nullb, length_t));

/*	i = 0;
	while (string_b[i])
		write(1, &string_b[i++], 1);
*/

	printf("\ntest memcpy null ft_memcpy\n");
	printf("null null length\n%s", string_c = ft_memcpy(point_null, point_nullb, length_t));
	if (string_c != string_b)
	{
		printf("error");
		return (1);
	}
/*
	i = 0;
	while (string_c[i])
		write(1, &string_c[i++], 1);
*/	printf("\ntest memcpy null null 1\n");
	memcpy(NULL, NULL, 5);
	printf("\ntest memcpy null null 2\n");
	ft_memcpy(NULL, NULL, 5);

	point_a = NULL;
	point_b = NULL;
	printf("\ntest memcpy null dest orignal 1\n");

/*	point_a = memcpy(NULL, string_const, 5);	
	printf("\ntest memcpy null dest ft\n");

	point_b = ft_memcpy(NULL, string_const, 5);
	if (*point_a != *point_b);
	{
	printf("erreur memcpy dest = NULL\n");
	return(1);
	}
*/
	printf("OK--ft_memcpy--OK\n\n");