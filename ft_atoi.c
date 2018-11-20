/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 21:24:13 by malibert          #+#    #+#             */
/*   Updated: 2018/11/02 15:56:58 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					a;
	unsigned long long	nb;
	int					neg;

	a = 0;
	nb = 0;
	neg = 0;
	while ((str[a] == ' ') || (str[a] == '\t') || (str[a] == '\v') ||
			(str[a] == '\n') || (str[a] == '\r') || (str[a] == '\f'))
		a++;
	if (str[a] == '-')
		neg = 1;
	if (str[a] == '-' || str[a] == '+')
		a++;
	while ((str[a] >= '0') && (str[a] <= '9'))
	{
		nb *= 10;
		nb += ((int)str[a++] - '0');
	}
	if (nb > 9223372036854775807)
		return ((neg == 1) ? 0 : -1);
	if (neg == 1)
		return (-nb);
	else
		return (nb);
}
