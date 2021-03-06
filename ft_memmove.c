/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 02:45:03 by hdebard           #+#    #+#             */
/*   Updated: 2015/11/28 08:07:54 by hdebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*buff;

	buff = (unsigned char*)malloc(sizeof(unsigned char*) * len);
	if (buff != NULL)
	{
		ft_memcpy(buff, src, len);
		ft_memcpy(dst, buff, len);
	}
	return (dst);
}
