#include "libft.h"
#include "test_libft.h"


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