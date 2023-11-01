#include "libft.h"
#include "test_libft.h"


/*----------------------- ft strmapi -----------------------------------------*/
/*_______ test fonction original ______*/
char	*testmapi(unsigned int i, char c)
{
	char	*out;

	out = &c;
	if (c >= 'a' && c <= 'z' && i < 5)
		c = (c - 32);
	return (out);
}

int	f_test_mg_strmapi(void)
{
	char const	*str_const = "abc456abcd";
	char		*out = NULL;
	out = ft_strmapi(str_const, (testmapi));
	printf("%s", out);


	return (0);
}
