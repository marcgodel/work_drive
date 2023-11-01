/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgodel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:15:01 by mgodel            #+#    #+#             */
/*   Updated: 2023/10/31 19:42:43 by mgodel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*mon main.c pour tester les fonctions de libft */

/*int f_test_mg_isalpha(void);
int f_test_mg_isdigit();
int f_test_mg_isalnum();
int f_test_mg_isascii();
int f_test_mg_isprint();
int f_test_mg_strlen();
int f_test_mg_memset();
int f_test_mg_bzero();
int f_test_mg_memcpy();
int f_test_mg_memmove();
int f_test_mg_strlcpy();
int f_test_mg_strlcat();
int f_test_mg_toupper();
int f_test_mg_tolower();
int f_test_mg_strchr();
int f_test_mg_strrchr();
int f_test_mg_strncmp();
int f_test_mg_memchr();
int f_test_mg_memcmp();
int f_test_mg_strnstr();
int f_test_mg_atoi();
int f_test_mg_calloc();
int f_test_mg_strdup();
int f_test_mg_substr();
int f_test_mg_strjoin();
int f_test_mg_strtrim();
int f_test_mg_split();
int f_test_mg_itoa();
int f_test_mg_strmapi();
int f_test_mg_striteri();
int f_test_mg_putchar_fd();
int f_test_mg_putstr_fd();
int f_test_mg_putendl_fd();
int f_test_mg_putnbr_fd();
int f_test_mg_lstnew();
int f_test_mg_lstadd_front();
int f_test_mg_lstsize();
int f_test_mg_lstlast();
int f_test_mg_lstadd_back();
int f_test_mg_lstdelone();
int f_test_mg_lstclear();
int f_test_mg_lstiter();
int f_test_mg_lstmap();
*/

#include "libft.h"



int	main ()
{


	int		ok;
	int		no;
	int		back_a;
	int		back_b;
	int		back_c;
	int		i;
	int		j;
	int		k;
	char		cc;
	size_t		length_t;
	size_t		l_t;
	char		*string_a = "Hello dix0";
	const char	*string_const = "Hello dix0";
	const char	*str_const = "Hello dux0";
	char		*string_b = NULL;
	char		*string_c = NULL;
	int		*point_a = NULL;
	int		*point_b = NULL;
	int		buffer_int_a[14];
	char		buffer_char_a[14];
	int		buffer_int_ft[14];
	char		buffer_char_ft[14];
	char		big_buffer_a[32] = {0};
	char		big_buffer_ft[32] = {0};

	char		dest_o[] = "DDD";
	char		src_o[] = "SSSSSSSSSS";

	char		s_o[] = "SSSSSSSSSS";
	char		d_o[] = "DDD";

	char		dest_ft[] = "DDD";
	char		src_ft[] = "SSSSSSSSSS";

	char		s_ft[] = "SSSSSSSSSS";
	char		d_ft[] = "DDD";

	void 		*p_void_a = NULL;
	void		*p_void_b = NULL;

	printf("\n\n test transfert unsigned long = -1 \n\n");
	unsigned long test_negative;
	test_negative = -1;
	printf("%lu\n", test_negative);

/*____________________________________________________________________________*/
/*----------------------- ft isalpha -----------------------------------------*/


	ok = 'a';
	no = 0;

/*_______ test fonction original ______*/

/*return (0) if the caractere is not what it should be.
 return (something else) if it is ok.
*/

	printf("test -isalpha, original fonction return\n");
	printf("%d\n", isalpha(ok));
	printf("return of original fonction if c = 0");
	printf("%d\n", isalpha(0));
	printf("\n\n");
//probablement imprime NULL donc n'imprime rien//


/*_______ test ft_fonction_____________*/

/*return (0) if the caractere is not what it should be.
 return (1) if it is ok.
*/
	printf("test -ft_isalpha:\n");

	while (ok <= 'z')
	{
		if (ft_isalpha(ok) == 0)
		{
			printf("erreur -ft_isalpha (lowercase)\n");
			return(1);
		}
		ok++;
	}
	ok = 'A';

	while (ok <= 'Z')
	{
		if (ft_isalpha(ok) == 0)
		{
			printf("erreur -ft_isalpha (uppercase)\n");
			return(1);
		}
		ok++;
	}
	while (no < 'A')
	{
		if (ft_isalpha(no))
		{
			printf("erreur -ft_isalpha (before A)\n");
			return(1);
		}
		no++;
	}
	no = ('Z' + 1);
	while (no < 'a')
	{
		if (ft_isalpha(no))
		{
			printf("erreur -ft_isalpha (befor a)\n");
			return(1);
		}
		no++;
	}
	no = ('z' + 1);
	while (no < 178)
	{
		if (ft_isalpha(no))
		{
			printf("erreur -ft_isalpha (after z)\n");
			return(1);
		}
		no++;
	}
	printf("OK--ft_isalpha--OK\n\n");
/*____________________________________________________________________________*/
/*----------------------- ft isdigit -----------------------------------------*/

/*_______ test fonction original ______*/

/*return (0) if the caractere is not what it should be.
 return (something else) if it is ok.
*/
	ok = '0';
	printf("test -isdigit, original fonction return\n");
	printf("%d\n", isdigit(ok));
	printf("return of original fonction if c = 0");
	printf("%d\n", isdigit(0));
	printf("\n\n");
//probablement imprime NULL donc n'imprime rien//


/*_______ test ft_fonction_____________*/

/*return (0) if the caractere is not what it should be.
 return (1) if it is ok.
*/
	printf("test -ft_isdigit:\n");

	ok = '0';
	while (ok <= '9')
	{
		if (ft_isdigit(ok) == 0)
		{
			printf("erreur -ft_isdigit (?digit?)\n");
			return(1);
		}
		ok++;
	}
	no = 0;
	while (no < '0')
	{
		if (ft_isdigit(no))
		{
			printf("erreur -ft_isdigit (before '0')\n");
			return(1);
		}
		no++;
	}
	no = ('9' + 1);
	while (no < 178)
	{
		if (ft_isdigit(no))
		{
			printf("erreur -ft_isdigit (after '0')\n");
			return(1);
		}
		no++;
	}
	printf("OK--ft_isdigit--OK\n\n");


/*____________________________________________________________________________*/
/*----------------------- ft isalnum -----------------------------------------*/

/*_______ test fonction original ______*/

/*return (0) if the caractere is not what it should be.
 return (something else) if it is ok.
*/
	ok = '0';
	printf("test -isalnum original fonction return\n");
	printf("%d\n", isalnum(ok));
	printf("return of original fonction if c = 0");
	printf("%d\n", isalnum(0));
	printf("\n\n");
//probablement imprime NULL donc n'imprime rien//


/*_______ test ft_fonction_____________*/

/*return (0) if the caractere is not what it should be.
 return (1) if it is ok.
*/
	printf("test -ft_isalnum:\n");

	ok = '0';
	while (ok <= '9')
	{
		if (ft_isalnum(ok) == 0)
		{
			printf("erreur -ft_isalnum (?digit?)\n");
			return(1);
		}
		ok++;
	}
	ok = 'a';
	while (ok <= 'z')
	{
		if (ft_isalnum(ok) == 0)
		{
			printf("erreur -ft_isalnum (lowercase)\n");
			return(1);
		}
		ok++;
	}
	ok = 'A';
	while (ok <= 'Z')
	{
		if (ft_isalnum(ok) == 0)
		{
			printf("erreur -ft_isalnum (uppercase)\n");
			return(1);
		}
		ok++;
	}



	no = 0;
	while (no < '0')
	{
		if (ft_isalnum(no))
		{
			printf("erreur -ft_isalnum (before '0')\n");
			return(1);
		}
		no++;
	}
	no = ('9' + 1);
	while (no < 'A')
	{
		if (ft_isalnum(no))
		{
			printf("erreur -ft_isalnum (before A)\n");
			return(1);
		}
		no++;
	}
	no = ('Z' + 1);
	while (no < 'a')
	{
		if (ft_isalnum(no))
		{
			printf("erreur -ft_isalnum (befor a)\n");
			return(1);
		}
		no++;
	}
	no = ('z' + 1);
	while (no < 178)
	{
		if (ft_isalnum(no))
		{
			printf("erreur -ft_isalnum (after z)\n");
			return(1);
		}
		no++;
	}
	printf("OK--ft_isalnum--OK\n\n");


/*____________________________________________________________________________*/
/*----------------------- ft isascii -----------------------------------------*/

/*_______ test fonction original ______*/

/*
 ascii = (decimal >= 0 && decimal <= 127)
 return (0) if the caractere is not what it should be.
 return (something else) if it is ok.
*/
	ok = 'a';
	printf("test -isascii, original fonction return\n");
	printf("%d\n", isascii(ok));
	printf("return of original fonction if c = 0\n");
	printf("%d,\n", isascii(0));
	printf("return of ft fonction if c = 0\n");
	printf("%d,\n", ft_isascii(0));
	printf("return of original fonction if c = 127\n");
	printf("%d,\n", isascii(127));
	printf("return of ft fonction if c = 127\n");
	printf("%d,\n", ft_isascii(127));
	printf("return of original fonction if c = -5\n");
	printf("%d\n", isascii(-5));
	printf("return of original fonction if c = -5\n");
	printf("%d\n", ft_isascii(-5));
	printf("\n\n");

//probablement imprime NULL donc n'imprime rien//


/*_______ test ft_fonction_____________*/

/*return (0) if the caractere is not what it should be.
 return (1) if it is ok.
*/
	printf("test -ft_isascii:\n");

	ok = '0';
	while (ok <= 127)
	{
		if (ft_isascii(ok) == 0)
		{
			printf("erreur -ft_isascii\n");
			return(1);
		}
		ok++;
	}
	no = -5;
	while (no < 0)
	{
		if (ft_isascii(no))
		{
			printf("erreur -ft_isascii (before 0)\n");
			return(1);
		}
		no++;
	}
// limit aleatoire.
	no = (128);
	while (no < 130)
	{
		if (ft_isascii(no))
		{
			printf("erreur -ft_isascii (after 127)\n");
			return(1);
		}
		no++;
	}
	printf("OK--ft_isascii--OK\n\n");

/*____________________________________________________________________________*/
/*----------------------- ft isprint -----------------------------------------*/

/*_______ test fonction original ______*/

/*
 isprint = (decimal >= 32 && decimal <= 127)
 from ( 'SPACE' TO '~')
 return (0) if the caractere is not what it should be.
 return (something else) if it is ok.
*/
	ok = 32;
	printf("test -isprint, original fonction return\n");
	printf("%d\n", isprint(ok));
	printf("return of original fonction if c = 0");
	printf("%d\n", isprint(0));
	printf("\n\n");
//probablement imprime NULL donc n'imprime rien//


/*_______ test ft_fonction_____________*/

/*return (0) if the caractere is not what it should be.
 return (1) if it is ok.
*/
	printf("test -ft_isprint:\n");

	ok = 32;
	while (ok <= 126)
	{
		if (ft_isprint(ok) == 0)
		{
			printf("erreur -ft_isprint\n");
		return(1);
		}
		ok++;
	}
	no = -5;
	while (no < 32)
	{
		if (ft_isprint(no))
		{
			printf("erreur -ft_isprint (before 32)\n");
			return(1);
		}
		no++;
	}
// limit aleatoire.
	no = (127);
	while (no < 130)
	{
		if (ft_isprint(no))
		{
			printf("erreur -ft_isprint (after 127)\n");
			return(1);
		}
		no++;
	}
	printf("OK--ft_isprint--OK\n\n");

/*____________________________________________________________________________*/
/*----------------------- ft strlen  -----------------------------------------*/

/*_______ test fonction original ______*/

/*
 return length of the string
 */
	back_a = 0;
	back_b = 0;
	printf("test -strlen, original fonction return\n");
	printf("%d\n", back_a = strlen(string_a));
	printf("\n\n");
//probablement imprime NULL donc n'imprime rien//


/*_______ test ft_fonction_____________*/
/**/
	back_b = ft_strlen(string_a);
	if (back_a != back_b)
	{
		printf("erreur return ft_strlen return\n");
		return (1);
	}
	printf("OK--ft_strlen--OK\n\n");

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

/*____________________________________________________________________________*/
/*----------------------- ft bzero   -----------------------------------------*/

/*_______ test fonction original ______*/

	length_t = 5;
	i = 0;
	while(i < 14)
		buffer_char_a[i++] = '8';
	i = 0;	
	while(i < 14)
		buffer_int_a[i++] = '8';
	bzero(buffer_char_a, length_t);
	bzero(buffer_int_a, length_t);

	back_a = 0;
	while (buffer_char_a[back_a] == 0)
		back_a++;
	back_b = 0;
	while (buffer_int_a[back_b] == 0)
		back_b++;
	printf("%d\n", back_a);
	printf("%d\n", back_b);

	i = 0;
	while(i < 14)
		buffer_char_a[i++] = '8';
	i = 0;	
	while(i < 14)
		buffer_int_a[i++] = '8';
	ft_bzero(buffer_char_a, length_t);
	ft_bzero(buffer_int_a, length_t);

	j = 0;
	while (buffer_char_a[j] == 0)
		j++;
	k = 0;
	while (buffer_int_a[k] == 0)
		k++;
	printf("%d\n", j);
	printf("%d\n", k);

	if (back_a == j && back_b == k)
		printf("OK--ft_bzero--OK\n\n");
	else
	{
		printf("error bzero");
		return(1);
	}

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

/*____________________________________________________________________________*/
/*----------------------- ft strlcpy -----------------------------------------*/
/*_______ test fonction original ______*/
	printf("test strlcpy\n");
	back_c = 0;
	string_b = NULL;
	string_c = NULL;
	length_t = 2;

	size_t	tta = 0;
	size_t	ttb = 0;
	size_t	ttc = 0;
	size_t	ta = 0;
	size_t	tb = 0;
	size_t	tc = 0;

	char	*str_aa = "aaa";
	char	*str_bb = "aaa";
	char	*str_cc = "aaa";
	char	*str_dd = "aaa";

	char	*string_aaa = "0123456789";
	char	*string_bbb = "0123456789";




	printf("strlcpy1\n");
	tta = strlcpy(string_aaa, string_const, length_t);
	printf("strlcpy2\n");
	ttb = strlcpy(str_aa, string_const, length_t);
	printf("strlcpy3\n");
	ttc = strlcpy(str_bb, string_const, length_t);
	printf("ft 4\n");
	ta = ft_strlcpy(string_bbb, string_const, length_t);
	printf("ft 5\n");
	tb = ft_strlcpy(str_cc, string_const, length_t);
	printf("ft 6\n");
	tc = ft_strlcpy(str_dd, string_const, length_t);

	if(tta == ta && ttb == tb && ttc == tc)
		printf("length ok");
	else
	{
		printf("length error");
		return (1);
	}
	while (string_b[ta] == string_c[ta] && ta >= 0)
		i--;
	while (str_aa[tb] == str_cc[tb] && tb >= 0)
		j--;
	while (str_bb[tc] == str_dd[tc] && tc >= 0)
		k--;
	if (ta < 0 && tb < 0 && tc < 0)
		printf("OK--ft_strlcpy--OK\n\n");
	else
	{
		printf("error ft_strlcpy");
		return(1);
	}

	printf("OK--ft_strlcpy--OK\n\n");



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


/*____________________________________________________________________________*/
/*----------------------- ft toupper -----------------------------------------*/
/*_______ test fonction original ______*/

	ok = 'a';
	j = 'A';
	while (ok <= 'z')
	{
		back_a = toupper(ok);
		if (back_a == j)
			j++;
		else
		{
			printf("error toupper 1");
			return (1);
		}
		ok++;
	}
/*
	no = 2;
	while(no > -10)
	{
		printf("%d\n", no);
		no--;
	}

	no = toupper(-10);
	printf("%d\n", no);
*/
	no = 'a' - 1;
	while (no > (0))
	{
		back_b = toupper(no);
		if (back_b == no)
			no = no -1;
		else
		{
			printf("error toupper 2");
			return (1);
		}
	}
	no = 'z' + 1;
	while (no < 200)
	{
		back_b = toupper(no);
		if (back_b == no)
			no++;
		else
		{
			printf("error toupper 3");
			return (1);
		}
	}

/*_______ test ft_fonction_____________*/

	ok = 'a';
	j = 'A';
	while (ok <= 'z')
	{
		back_a = ft_toupper(ok);
		if (back_a == j)
			j++;
		else
		{
			printf("error ft_toupper 1");
			return (1);
		}
		ok++;
	}
	no = 'a' - 1;
	while (no > (0))
	{
		back_b = ft_toupper(no);
		if (back_b == no)
			no = no -1;
		else
		{
			printf("error ft_toupper 2");
			return (1);
		}
	}
	no = 'z' + 1;
	while (no < 200)
	{
		back_b = ft_toupper(no);
		if (back_b == no)
			no++;
		else
		{
			printf("error ft_toupper 3");
			return (1);
		}
	}
	printf("OK--ft_toupper--OK\n\n");

/*____________________________________________________________________________*/

/*----------------------- ft tolower -----------------------------------------*/
/*_______ test fonction original ______*/
	ok = 'A';
	j = 'a';
	while (ok <= 'Z')
	{
		back_a = tolower(ok);
		if (back_a == j)
			j++;
		else
		{
			printf("error tolower 1");
			return (1);
		}
		ok++;
	}
	no = 'A' - 1;
	while (no > (0))
	{
		back_b = tolower(no);
		if (back_b == no)
			no = no -1;
		else
		{
			printf("error tolower 2");
			return (1);
		}
	}
	no = 'Z' + 1;
	while (no < 200)
	{
		back_b = tolower(no);
		if (back_b == no)
			no++;
		else
		{
			printf("error tolower 3");
			return (1);
		}
	}
/*_______ test ft_fonction_____________*/
	ok = 'A';
	j = 'a';
	while (ok <= 'Z')
	{
		back_a = ft_tolower(ok);
		if (back_a == j)
			j++;
		else
		{
			printf("error ft_tolower 1");
			return (1);
		}
		ok++;
	}
	no = 'A' - 1;
	while (no > (0))
	{
		back_b = ft_tolower(no);
		if (back_b == no)
			no = no -1;
		else
		{
			printf("error ft_tolower 2");
			return (1);
		}
	}
	no = 'Z' + 1;
	while (no < 200)
	{
		back_b = ft_tolower(no);
		if (back_b == no)
			no++;
		else
		{
			printf("error ft_tolower 3");
			return (1);
		}
	}
	printf("OK--ft_tolower--OK\n\n");

/*____________________________________________________________________________*/

/*----------------------- ft strchr  -----------------------------------------*/
/*_______ test fonction original ______*/
	i = 'i';
	string_b = NULL;
	string_b = strchr(string_const, i);
	string_c = ft_strchr(string_const, i);
	if (string_b == string_c)
		printf("OK--ft_strchr--OK\n\n");
	else
		printf("error ft_strchr\n\n");

/*____________________________________________________________________________*/

/*----------------------- ft strrchr -----------------------------------------*/
/*_______ test fonction original ______*/
	i = 'i';
	string_b = NULL;
	string_b = strrchr(string_const, i);
	string_c = ft_strrchr(string_const, i);
	if (string_b == string_c)
		printf("OK--ft_strrchr--OK\n\n");
	else
		printf("error ft_strrchr\n\n");

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
/*____________________________________________________________________________*/

/*----------------------- ft strnstr -----------------------------------------*/
/*_______ test fonction original ______*/
	printf("start strnstr\n");

/*	

	length_t = 10;
	string_b = strnstr(string_const, str_const, length_t);
	string_c = ft_strnstr(string_const, str_const, length_t);
	if (string_b != string_c)
	{
		printf("error ft_strnstr 1\n");
		return (1);
	}

	length_t = 3;
	string_b = strnstr(string_const, str_const, length_t);
	string_c = ft_strnstr(string_const, str_const, length_t);
	if (string_b != string_c)
	{
		printf("error ft_strnstr 1\n");
		return (1);
	}
	length_t = 0;
	string_b = strnstr(string_const, str_const, length_t);
	string_c = ft_strnstr(string_const, str_const, length_t);
	if (string_b != string_c)
	{
		printf("error ft_strnstr 1\n");
		return (1);
	}
	length_t = 15;
	string_b = strnstr(string_const, str_const, length_t);
	string_c = ft_strnstr(string_const, str_const, length_t);
	if (string_b != string_c)
	{
		printf("error ft_strnstr 1\n");
		return (1);
	}
	printf("OK--ft_strnstr--OK\n\n");


*/


/*____________________________________________________________________________*/

/*----------------------- ft atoi --------------------------------------------*/
/*_______ test fonction original ______*/

	const char *stra = " \r 123 45 hell";
	const char *strb = "\n\f\v  \r \t4568910";
	const char *strc = "\n-45678910";
	const char *strd = "-+45678910";
	const char *stre = "\f+45678910";

	i = atoi(stra);
	printf("atoi a\n%d\n", i);
	j = ft_atoi(stra);
	printf("ft_atoi a\n%d\n", j);
	if (i != j)
	{
		printf("error ft_atoi 1");
		return (1);
	}
	i = atoi(strb);
	printf("atoi b\n%d\n", i);
	j = ft_atoi(strb);
	printf("ft_atoi b\n%d\n", j);
	if (i != j)
	{
		printf("error ft_atoi 2");
		return (1);
	}
	i = atoi(strc);
	printf("atoi c\n%d\n", i);

	j = ft_atoi(strc);
	printf("ft_atoi c\n%d\n", j);
	if (i != j)
	{
		printf("error ft_atoi 3");
		return (1);
	}
	i = atoi(strd);
	printf("atoi d\n%d\n", i);
	j = ft_atoi(strd);
	printf("ft_atoi d\n%d\n", j);
	if (i != j)
	{
		printf("error ft_atoi 4");
		return (1);
	}
	i = atoi(stre);
	printf("atoi e\n%d\n", i);
	j = ft_atoi(stre);
	printf("ft_atoi e\n%d\n", j);
	if (i != j)
	{
		printf("error ft_atoi 5");
		return (1);
	}
	printf("OK--ft_atoi--OK\n\n");
/*____________________________________________________________________________*/

/*----------------------- ft calloc  -----------------------------------------*/
/*_______ test fonction original ______*/

	printf("test ft_calloc\n");
	string_b = NULL;
	string_c = NULL;
	length_t = 10;
       	l_t = 1;	
	string_b = calloc(length_t, l_t);
	string_c = ft_calloc(length_t, l_t);
	i = 0;
	j = (length_t) * (l_t);
	while(i != j)
	{
		if (string_b[i] != string_c[i])
		{
			printf("error calloc\n");
			return(1);
		}
		i++;
	}
	printf("OK--ft_calloc--OK\n\n");
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


/*----------------------- ft strjoin -----------------------------------------*/
/*____________________________________________________________________________*/

	printf("\ntest ft_strjoin\n\n");

	string_b = NULL;
	string_c = NULL;
	printf("test ft_strjoin\n\n");
	printf("whith <%s>, <%s>", string_const, str_const);
	string_c = ft_strjoin(string_const, str_const);
	printf("strjoin\n%s\n", string_c);


	printf("OK--ft_strjoin--OK\n\n");
/*____________________________________________________________________________*/

/*----------------------- ft strtrim -----------------------------------------*/
/*_______ test fonction original ______*/
	string_b = NULL;
	string_c = NULL;
	const char	*set_a = "uH0ex";
	printf("test ft_strtrim\n\n");
	printf("whith s1 = <%s>, set = <%s>\n", string_const, set_a);
	string_c = ft_strtrim(string_const, set_a);
	printf("strtrim\n%s\n", string_c);
	string_c = ft_strtrim("mgodel   xxx", " x");
	printf("strtrim\n%s\n", string_c);
	printf("OK--ft_strtrim--OK\n\n");
/*----------------------- ft split   -----------------------------------------*/
/*_______ test fonction original ______*/


/*
	write(1, "test ft_split\n", 14);
	j = 0;
	const char	*s_split = "HH1ello1HH2 ca va2H3\n?3HH4je ne sais pas4H mais split ouiHH\nHH!!Hend";
	cc = 'H';

	char	**arr_arr = NULL;
	arr_arr = ft_split(s_split, cc);
	i = 0;
	while(arr_arr[i])
	{
		j = 0;
		while(arr_arr[i][j])
			write(1, &arr_arr[i][j++], 1);
		write(1, "\n", 1);
		i++;
	}
	printf("OK--ft_split--OK\n\n");

*/


/*----------------------- ft itoa    -----------------------------------------*/
/*_______ test fonction original ______*/


	printf("%s\n", ft_itoa(4444));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(99999999));
	printf("%s\n", ft_itoa(-2147483647));
	printf("%s\n", ft_itoa(-4444));


/*----------------------- ft strmapi -----------------------------------------*/
/*_______ test fonction original ______*/




/*----------------------- ft striteri ----------------------------------------*/
/*_______ test fonction original ______*/



/*
char	*change_b(unsigned int i, char *s)
{
	i = i + '0';
		s = i;
}
	unsigned int unint = 5;
	printf("%s,\n", src_o);
	printf("%s, \n", ft_striteri(src_o, (change_b)(unsigned int, char*));, 
*/



/*----------------------- ft putchar fd --------------------------------------*/
/*_______ test fonction original ______*/

/*----------------------- ft putstr fd  --------------------------------------*/
/*_______ test fonction original ______*/

/*----------------------- ft putendl fd --------------------------------------*/
/*_______ test fonction original ______*/

/*----------------------- ft putnbr fd  --------------------------------------*/
/*_______ test fonction original ______*/

	ft_putnbr_fd(-2147483648, 1);
	ft_putnbr_fd(0, 1);

/*----------------------- _ bonus       --------------------------------------*/
/*_______ test fonction original ______*/

	printf("\n\n test transfert unsigned long = -1 \n\n");
	test_negative = -1;
	printf("%lu\n", test_negative);

	return (0);
}
