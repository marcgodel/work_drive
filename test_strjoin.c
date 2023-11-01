#include "libft.h"
#include "test_libft.h"

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