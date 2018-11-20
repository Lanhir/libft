/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 00:31:11 by malibert          #+#    #+#             */
/*   Updated: 2018/10/19 00:25:23 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	size_t	a;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	a = 0;
	str = ft_strnew(ft_strlen(s));
	if (str == NULL)
		return (NULL);
	while (s[a] != '\0')
	{
		str[a] = (*f)(s[a]);
		a++;
	}
	return (str);
}
