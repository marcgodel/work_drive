/*____________________________________________________________________________*/
/*----------------------- ft isalpha -----------------------------------------*/
#include "libft.h"
#include "test_libft.h"


int f_test_mg_isalpha(void)
{
	

	int	ok = 'a';
	int	no = 0;

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
	return (0);
}
