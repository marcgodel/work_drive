#include "libft.h"
#include "test_libft.h"

{
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
}