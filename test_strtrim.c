#include "libft.h"
#include "test_libft.h"

/*____________________________________________________________________________*/

/*----------------------- ft strtrim -----------------------------------------*/
/*_______ test fonction original ______*/
	string_b = NULL;
	string_c = NULL;
	const char	*set_a = "uH0ex";
	printf("test ft_strtrim\n\n");
	printf("whith s1 = <%s>, set = <%s>\n", string_const, set_a);
	string_c = ft_strtrim(string_const, set_a);
	printf("strtrim\n%s\n", string_c);
	string_c = ft_strtrim("mgodel   xxx", " x");
	printf("strtrim\n%s\n", string_c);
	printf("OK--ft_strtrim--OK\n\n");