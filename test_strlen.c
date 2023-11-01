#include "libft.h"
#include "test_libft.h"

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