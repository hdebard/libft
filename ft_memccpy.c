/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 02:26:12 by hdebard           #+#    #+#             */
/*   Updated: 2015/11/27 07:02:37 by hdebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*n_dst;
	unsigned char		*n_src;
	unsigned char		j;
	int					count;

	count = 0;
	j = (unsigned char)c;
	n_dst = (unsigned char*)dst;
	n_src = (unsigned char*)src;
	while (count < n)
	{
		n_dst[count] = n_src[count];
		if (n_dst[count] == j)
		{
			return (n_dst + count + 1);
		}
		count++;
	}
	return (NULL);
}
