#include "libft.h"
#include "test_libft.h"

/*____________________________________________________________________________*/

/*----------------------- ft atoi --------------------------------------------*/
/*_______ test fonction original ______*/

	const char *stra = " \r 123 45 hell";
	const char *strb = "\n\f\v  \r \t4568910";
	const char *strc = "\n-45678910";
	const char *strd = "-+45678910";
	const char *stre = "\f+45678910";

	i = atoi(stra);
	printf("atoi a\n%d\n", i);
	j = ft_atoi(stra);
	printf("ft_atoi a\n%d\n", j);
	if (i != j)
	{
		printf("error ft_atoi 1");
		return (1);
	}
	i = atoi(strb);
	printf("atoi b\n%d\n", i);
	j = ft_atoi(strb);
	printf("ft_atoi b\n%d\n", j);
	if (i != j)
	{
		printf("error ft_atoi 2");
		return (1);
	}
	i = atoi(strc);
	printf("atoi c\n%d\n", i);

	j = ft_atoi(strc);
	printf("ft_atoi c\n%d\n", j);
	if (i != j)
	{
		printf("error ft_atoi 3");
		return (1);
	}
	i = atoi(strd);
	printf("atoi d\n%d\n", i);
	j = ft_atoi(strd);
	printf("ft_atoi d\n%d\n", j);
	if (i != j)
	{
		printf("error ft_atoi 4");
		return (1);
	}
	i = atoi(stre);
	printf("atoi e\n%d\n", i);
	j = ft_atoi(stre);
	printf("ft_atoi e\n%d\n", j);
	if (i != j)
	{
		printf("error ft_atoi 5");
		return (1);
	}
	printf("OK--ft_atoi--OK\n\n");