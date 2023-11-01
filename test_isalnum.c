#include "libft.h"
#include "test_libft.h"


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


