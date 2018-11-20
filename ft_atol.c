/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 01:22:14 by malibert          #+#    #+#             */
/*   Updated: 2018/11/05 23:05:34 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *str)
{
	long	a;
	long	nb;
	int		neg;

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
		nb += ((long)str[a] - '0');
		a++;
	}
	if (neg == 1)
		return (-nb);
	else
		return (nb);
}
