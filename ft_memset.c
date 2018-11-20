/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:10:03 by malibert          #+#    #+#             */
/*   Updated: 2018/10/12 04:43:32 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			a;
	unsigned char	*str;

	if (len <= 0)
		return (b);
	a = 0;
	str = (unsigned char *)b;
	while (a < len)
	{
		str[a] = c;
		a++;
	}
	return (b);
}
