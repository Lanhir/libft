/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 17:16:02 by malibert          #+#    #+#             */
/*   Updated: 2018/10/12 07:52:12 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;
	void	*str;

	str = 0;
	a = 0;
	while (a < n)
	{
		if (((unsigned char *)s)[0] == (unsigned char)c)
		{
			str = (void *)s;
			return (str);
		}
		a++;
		s++;
	}
	return (NULL);
}
