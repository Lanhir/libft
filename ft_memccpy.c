/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:16:13 by malibert          #+#    #+#             */
/*   Updated: 2018/10/18 19:45:59 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		((unsigned char *)dst)[a] = ((unsigned char *)src)[a];
		if (((unsigned char *)src)[a] == (unsigned char)c)
			return (dst + a + 1);
		a++;
	}
	return (NULL);
}
