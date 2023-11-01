/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgodel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:06:38 by mgodel            #+#    #+#             */
/*   Updated: 2023/10/26 16:12:33 by mgodel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned long	i;
	char	*out;

	i = 0;
	out = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			out = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		out = (char *)&s[i];
	return (out);
}
