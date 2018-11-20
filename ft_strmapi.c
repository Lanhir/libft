/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 00:57:14 by malibert          #+#    #+#             */
/*   Updated: 2018/10/19 00:26:09 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
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
		str[a] = (*f)(a, s[a]);
		a++;
	}
	return (str);
}
