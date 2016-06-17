/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 00:01:45 by hdebard           #+#    #+#             */
/*   Updated: 2015/11/28 07:45:34 by hdebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcount(char const *s, char c)
{
	int		i;
	char	*u;
	char	*z;

	z = NULL;
	i = 0;
	u = (char*)s;
	while (*u)
	{
		if (*u == c)
			i++;
		u++;
	}
	return (i);
}
