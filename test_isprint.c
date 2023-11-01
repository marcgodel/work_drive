#include "libft.h"
#include "test_libft.h"

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
