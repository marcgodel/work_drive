/*____________________________________________________________________________*/
/*----------------------- ft isdigit -----------------------------------------*/
#include "libft.h"
#include "test_libft.h"

int f_test_mg_isdigit()
{
/*_______ test fonction original ______*/

/*return (0) if the caractere is not what it should be.
 return (something else) if it is ok.
*/
	int	ok = '0';
	int	no = ' ';
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

return (0);
}



