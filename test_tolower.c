#include "libft.h"
#include "test_libft.h"

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