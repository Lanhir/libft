/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 03:42:16 by malibert          #+#    #+#             */
/*   Updated: 2018/10/19 00:36:56 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	int		a;
	int		b;
	int		c;
	char	*str;

	if (s == NULL)
		return (NULL);
	a = 0;
	b = ft_strlen((char *)s) - 1;
	c = 0;
	while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
		a++;
	if (s[a] == '\0')
		return (ft_strnew(b));
	while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
		b--;
	if (!(str = (char *)malloc(sizeof(char) * ((b - a) + 2))))
		return (NULL);
	while (a <= b)
		str[c++] = s[a++];
	str[c] = '\0';
	return (str);
}
