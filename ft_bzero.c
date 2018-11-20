/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:55:19 by malibert          #+#    #+#             */
/*   Updated: 2018/10/12 05:44:51 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			a;
	unsigned char	*str;

	if (n <= 0)
		return ;
	a = 0;
	str = (unsigned char *)s;
	while (a < n)
	{
		str[a] = 0;
		a++;
	}
}
