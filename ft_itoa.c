/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 22:09:54 by malibert          #+#    #+#             */
/*   Updated: 2018/10/18 19:44:45 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t		a;
	int			tmp;
	char		*str;
	char		ctmp[12];

	a = 0;
	tmp = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		tmp = -n;
	while (tmp > 0)
	{
		ctmp[a++] = (tmp % 10) + '0';
		tmp = tmp / 10;
	}
	if (n < 0)
		ctmp[a++] = '-';
	if (!(str = ft_memalloc(a + 1)))
		return (NULL);
	while (a-- > 0)
		str[tmp++] = ctmp[a];
	return (str);
}
