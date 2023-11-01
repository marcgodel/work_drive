#include "libft.h"
#include "test_libft.h"

/*____________________________________________________________________________*/
/*----------------------- ft memset  -----------------------------------------*/

// void *ft_memset(void *s, int c, size_t n);//
/*
 *
 *
*/

/*_______ test fonction original ______*/

/*
 return length of the string
 */
	printf("test -memset, original fonction return\n");

	i = 0;
	while (i < 14)
		buffer_char_a[i++] = 'a';

	ok = 'B';
	length_t = 5;

	string_b = memset(buffer_char_a, ok, length_t);

	i = 0;
	while (i < 10)
		write(1, &string_b[i++], 1);
	write(1, "\n", 1);

// test whith char buffer.//
// test whith in buffer.//
//
	printf("\n\n");

	i = 0;
	while (i < 14)
		buffer_int_a[i++] = 'a';

	ok = 'B';
	length_t = 5;

	point_a = memset(buffer_int_a, ok, length_t);

	i = 0;
	while (i < 10)
		write(1, &point_a[i++], 1);
	write(1, "\n", 1);

	printf("\n\n");



/*_______ test ft_fonction_____________*/

	printf("test -ft_memset fonction return\n");

	i = 0;
	while (i < 14)
		buffer_char_ft[i++] = 'a';

	string_c = ft_memset(buffer_char_ft, ok, length_t);

	i = 0;
	while (i < 10)
		write(1, &string_c[i++], 1);
	write(1, "\n", 1);
	printf("\n\n");

// test whith char buffer.//
// test whith in buffer.//


	i = 0;
	while (i < 14)
		buffer_int_ft[i++] = 'a';

	ok = 'B';
	length_t = 5;

	point_b = ft_memset(buffer_int_ft, ok, length_t);

	i = 0;
	while (i < 10)
		write(1, &point_b[i++], 1);
	write(1, "\n", 1);

	printf("\n\n");

// comparison
//
	i = 0;
	while((char)string_b[i] == (char)string_c[i] && i < 14)
		i++;
	i = i - 1;
	if (!((char)string_b[i] == (char)string_c[i]) || i < 13)
	{
		printf("error ft_memset (char)");
		return(1);
	}

	i = 0;
	while((char)point_a[i] == (char)point_b[i] && i < 14)
		i++;
	i = i - 1;
	if (!((char)point_a[i] == (char)point_b[i]) || i < 13)
	{
		printf("error ft_memset (int)");
		return (1);
	}

	printf("OK--ft_memset--OK\n\n");
