#include "libft.h"
#include "test_libft.h"

/*____________________________________________________________________________*/
/*----------------------- ft strlcpy -----------------------------------------*/
/*_______ test fonction original ______*/
int	f_test_mg_strlcpy(void)
{
	printf("test strlcpy\n");
	size_t	length_t = 2;
	size_t	tta = 0;
	size_t	ttb = 0;
	size_t	ttc = 0;
	size_t	ta = 0;
	size_t	tb = 0;
	size_t	tc = 0;
	char	*str_aa = "0123456789";
	char	*str_bb = "0123456789";
	char	*str_cc = "0123456789";
	char	*str_dd = "0123456789";
	char	*string_aaa = "0123456789";
	char	*string_bbb = "0123456789";
	char	*str_void = "\0";
	char const	*string_const = "abc";
	char const	*string_cons = "0123456789";
	char const	*str_cons = "0123456789012";


	printf("strlcpy1\n");
	tta = strlcpy(string_aaa, string_const, length_t);
	printf("strlcpy2\n");
	ttb = ft_strlcpy(str_aa, string_const, length_t);
	if(tta != ttb)
		printf("err return 1");
	while (string_aaa[tta] == str_aa[tta] && tta >= 0)
		tta--;
	if (tta != 0)
		printf("error 1");
	printf("strlcpy3\n");
	ttc = strlcpy(str_bb, string_cons, length_t);
	printf("ft 4\n");
	ta = ft_strlcpy(string_bbb, string_cons, length_t);
	if(ttc != ta)
		printf("err return 2");
	while (string_bbb[ta] == str_bb[ta] && ta >= 0)
		ta--;
	if (ta != 0)
		printf("error 2");
	printf("ft 5\n");
	tb = ft_strlcpy(str_cc, str_cons, length_t);
	printf("ft 6\n");
	tc = ft_strlcpy(str_dd, str_cons, length_t);
	if(tc != tb)
		printf("err return 3");
	while (str_dd[tc] == str_cc[tc] && tc >= 0)
		tc--;
	if (tc != 0)
		printf("error 3");

	if (!(ta < 0 && tb < 0 && tc < 0))	
	{
		printf("error ft_strlcpy a");
		return(1);
	}
/* idem with length different */
	length_t = 0;
	printf("strlcpy1\n");
	tta = strlcpy(string_aaa, string_const, length_t);
	printf("strlcpy2\n");
	ttb = ft_strlcpy(str_aa, string_const, length_t);
	if(tta != ttb)
		printf("err return 1");
	while (string_aaa[tta] == str_aa[tta] && tta >= 0)
		tta--;
	if (tta != 0)
		printf("error 1");
	printf("strlcpy3\n");
	ttc = strlcpy(str_bb, string_cons, length_t);
	printf("ft 4\n");
	ta = ft_strlcpy(string_bbb, string_cons, length_t);
	if(ttc != ta)
		printf("err return 2");
	while (string_bbb[ta] == str_bb[ta] && ta >= 0)
		ta--;
	if (ta != 0)
		printf("error 2");
	printf("ft 5\n");
	tb = ft_strlcpy(str_cc, str_cons, length_t);
	printf("ft 6\n");
	tc = ft_strlcpy(str_dd, str_cons, length_t);
	if(tc != tb)
		printf("err return 3");
	while (str_dd[tc] == str_cc[tc] && tc >= 0)
		tc--;
	if (tc != 0)
		printf("error 3");

	if (!(ta < 0 && tb < 0 && tc < 0))	
	{
		printf("error ft_strlcpy b");
		return(1);
	}
/* idem with length different */
	length_t = 15;
	printf("strlcpy1\n");
	tta = strlcpy(string_aaa, string_const, length_t);
	printf("strlcpy2\n");
	ttb = ft_strlcpy(str_aa, string_const, length_t);
	if(tta != ttb)
		printf("err return 1");
	while (string_aaa[tta] == str_aa[tta] && tta >= 0)
		tta--;
	if (tta != 0)
		printf("error 1");
	printf("strlcpy3\n");
	ttc = strlcpy(str_bb, string_cons, length_t);
	printf("ft 4\n");
	ta = ft_strlcpy(string_bbb, string_cons, length_t);
	if(ttc != ta)
		printf("err return 2");
	while (string_bbb[ta] == str_bb[ta] && ta >= 0)
		ta--;
	if (ta != 0)
		printf("error 2");
	printf("ft 5\n");
	tb = ft_strlcpy(str_cc, str_cons, length_t);
	printf("ft 6\n");
	tc = ft_strlcpy(str_dd, str_cons, length_t);
	if(tc != tb)
		printf("err return 3");
	while (str_dd[tc] == str_cc[tc] && tc >= 0)
		tc--;
	if (tc != 0)
		printf("error 3");

	if (!(ta < 0 && tb < 0 && tc < 0))	
	{
		printf("error ft_strlcpy b");
		return(1);
	}


	printf("OK--ft_strlcpy--OK\n\n");
	return (0);
}
