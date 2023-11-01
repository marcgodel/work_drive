#include "libft.h"
#include "test_libft.h"

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