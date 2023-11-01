/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgodel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:50:02 by mgodel            #+#    #+#             */
/*   Updated: 2023/10/26 08:56:23 by mgodel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
		}
	}
	else
	{
		i = len;
		while (i)
		{
			i--;
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dst);
}
