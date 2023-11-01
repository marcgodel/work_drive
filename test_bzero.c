#include "libft.h"
#include "test_libft.h"

/*____________________________________________________________________________*/
/*----------------------- ft bzero   -----------------------------------------*/

/*_______ test fonction original ______*/

	length_t = 5;
	i = 0;
	while(i < 14)
		buffer_char_a[i++] = '8';
	i = 0;	
	while(i < 14)
		buffer_int_a[i++] = '8';
	bzero(buffer_char_a, length_t);
	bzero(buffer_int_a, length_t);

	back_a = 0;
	while (buffer_char_a[back_a] == 0)
		back_a++;
	back_b = 0;
	while (buffer_int_a[back_b] == 0)
		back_b++;
	printf("%d\n", back_a);
	printf("%d\n", back_b);

	i = 0;
	while(i < 14)
		buffer_char_a[i++] = '8';
	i = 0;	
	while(i < 14)
		buffer_int_a[i++] = '8';
	ft_bzero(buffer_char_a, length_t);
	ft_bzero(buffer_int_a, length_t);

	j = 0;
	while (buffer_char_a[j] == 0)
		j++;
	k = 0;
	while (buffer_int_a[k] == 0)
		k++;
	printf("%d\n", j);
	printf("%d\n", k);

	if (back_a == j && back_b == k)
		printf("OK--ft_bzero--OK\n\n");
	else
	{
		printf("error bzero");
		return(1);
	}