/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 18:21:21 by malibert          #+#    #+#             */
/*   Updated: 2018/10/15 20:39:03 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	a;
	size_t	srclen;

	a = 0;
	srclen = ft_strlen(src);
	while (a < len)
	{
		if (srclen < a)
			dst[a] = '\0';
		else
			dst[a] = src[a];
		a++;
	}
	return (dst);
}
