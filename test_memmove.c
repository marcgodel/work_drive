#include "libft.h"
#include "test_libft.h"

/*____________________________________________________________________________*/
/*----------------------- ft memmove -----------------------------------------*/
/*_______ test fonction original ______*/

	printf("test memmove\n");

	printf("\ndes_o et src_o befor fonction 1\n");
	i = 0;
	while(i < 3)
		dest_o[i++] = 'D';
	i = 0;
	while(i < 10)
		src_o[i++] = 'S';
	printf("%p,\n", &dest_o);
	printf("%p,\n", &src_o);
	i = 0;
	while (i < 10)
		write(1, &dest_o[i++], 1);
	write(1, "\n", 1);
	i = 0;
	while (i < 10)
		write(1, &src_o[i++], 1);
	write(1, "\n", 1);
	length_t = 10;
//	p_void_a = memmove(dest_o, src_o, length_t);
	printf("\ndes_o et src_o after fonction 1\n");
	i = 0;
	j = 11;
	k = 3;
	while (i < j)
		write(1, &src_o[i++], 1);
	write(1, "\n", 1);
	i = 0;
	while (i < k)
		write(1, &dest_o[i++], 1);
	write(1, "\n", 1);
//
/*SENS INVERSE*/
//
	printf("\nd_o et s_o befor fonction 2\n");
	printf("%p,\n", &d_o);
	printf("%p,\n", &s_o);
	i = 0;
	while(i < 3)
		d_o[i++] = 'D';
	i = 0;
	while(i < 10)
		s_o[i++] = 'S';
	i = 0;
	while (i < 10)
		write(1, &d_o[i++], 1);
	write(1, "\n", 1);
	i = 0;
	while (i < 10)
		write(1, &s_o[i++], 1);
	write(1, "\n", 1);
	length_t = 10;
//	string_b = memmove(d_o, s_o, length_t);
	printf("\nd_o et s_o after fonction 2\n");
	i = 0;
	while (i < j)
		write(1, &s_o[i++], 1);
	write(1, "\n", 1);
	i = 0;
	while (i < k)
		write(1, &d_o[i++], 1);
	write(1, "\n", 1);

/*_______ test ft_fonction_____________*/


	printf("\ndest_ft et src_ft befor fonction 3\n");
	i = 0;
	while(i < 3)
		dest_ft[i++] = 'D';
	i = 0;
	while(i < 10)
		src_ft[i++] = 'S';
	printf("%p,\n", &dest_ft);
	printf("%p,\n", &src_ft);
	i = 0;
	while (i < 10)
		write(1, &dest_ft[i++], 1);
	write(1, "\n", 1);
	i = 0;
	while (i < 10)
		write(1, &src_ft[i++], 1);
	write(1, "\n", 1);
	length_t = 10;
	string_b = ft_memmove(dest_ft, src_ft, length_t);
	printf("\ndest_ft et src_ft after fonction 3\n");
	i = 0;
	while (i < j)
		write(1, &src_ft[i++], 1);
	write(1, "\n", 1);
	i = 0;
	while (i < k)
		write(1, &dest_ft[i++], 1);
	write(1, "\n", 1);
//
/*SENS INVERSE*/
//
	printf("\nd_ft et s_ft befor fonction 4\n");
	printf("%p,\n", &d_ft);
	printf("%p,\n", &s_ft);
	i = 0;
	while(i < 3)
		d_ft[i++] = 'D';
	i = 0;
	while(i < 10)
		s_ft[i++] = 'S';
	i = 0;
	while (i < 10)
		write(1, &d_ft[i++], 1);
	write(1, "\n", 1);
	i = 0;
	while (i < 10)
		write(1, &s_ft[i++], 1);
	write(1, "\n", 1);
	length_t = 10;
	string_b = ft_memmove(d_ft, s_ft, length_t);
	printf("\nd_ft et s_ft after fonction 4\n");
	i = 0;
	while (i < j)
		write(1, &s_ft[i++], 1);
	write(1, "\n", 1);
	i = 0;
	while (i < k)
		write(1, &d_ft[i++], 1);
	write(1, "\n", 1);
/*
 * comparaison / comparison
 *
 * */

/*	i = 0;
	k = 3;
	while(dest_ft[i] == dest_o[i])
		i++;
	if (i < 3)
	{
		printf("error memmove 1\n");
		return(1);
	}
	i = 0;
	while(d_ft[i] == d_o[i])
		i++;
	if (i < 3)
	{
		printf("error memmove 2\n");
		return(1);
	}

*/

/*memmove whith null parameter*/

	printf("\ntest memmove null orgiginal memmove\n");

	point_null = NULL;
	point_nullb = NULL;

	length_t = 0;
	printf("null null length\n%p", p_void_a = memmove(point_null, point_nullb, length_t));

/*	i = 0;
	while (string_b[i])
		write(1, &string_b[i++], 1);
*/

	printf("\ntest memmove null ft_memmove\n");
	printf("null null length\n%p", p_void_b = ft_memmove(point_null, point_nullb, length_t));
	if (p_void_a != p_void_b)
	{
		printf("error");
		return (1);
	}
/*
	i = 0;
	while (string_c[i])
		write(1, &string_c[i++], 1);
*/	printf("\ntest memmove null null 1\n");
	printf("null null length\n%p", p_void_a = memmove(NULL, NULL, 5));
	printf("\ntest memmove null null 2\n");
	printf("null null length\n%p", p_void_b = ft_memmove(NULL, NULL, 5));

	p_void_a = NULL;
	p_void_b = NULL;
	printf("\ntest memmove null dest orignal 1\n");

/*	p_void_a = memmove(NULL, string_const, 5);
 *
segfault */
	printf("\ntest memmove null dest ft\n");
/*
	p_void_b = ft_memmove(NULL, string_const, 5);
*/


	memmove(NULL, NULL, 5);
	ft_memmove(NULL, NULL, 5);
	printf("test src NULL origin\n");
	/* doit segfault */
//	memmove(string_const, NULL, 5);
	printf("test src NULL ft\n");
	/* doit segfault */
//	ft_memmove(string_const, NULL, 5);



	printf("OK--ft_memove--OK\n\n");
