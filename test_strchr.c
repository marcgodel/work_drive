#include "libft.h"
#include "test_libft.h"

/*____________________________________________________________________________*/

/*----------------------- ft strchr  -----------------------------------------*/
/*_______ test fonction original ______*/
int	f_test_mg_strchr(void)
{
	int		i = '8';
	const char	*string_const = "8123456789"
	char		*string_b = NULL;
	char		*string_c = NULL;
	string_b = strchr(string_const, i);
	string_c = ft_strchr(string_const, i);
	if (string_b == string_c)
		printf("strchr test 1 ok\n");
	else
		printf("error ft_strchr test 1\n\n");
	i = '\0';
	string_b = NULL;
	string_c = NULL;
	string_b = strchr(string_const, i);
	string_c = ft_strchr(string_const, i);
	if (string_b == string_c)
		printf("strchr test 2 ok\\n\n");
	else
		printf("error ft_strchr test 2\n\n");
	return (0);
}
