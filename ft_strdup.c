/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 17:38:56 by malibert          #+#    #+#             */
/*   Updated: 2018/10/12 08:26:24 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		a;
	int		size;
	char	*s2;

	a = 0;
	size = 0;
	while (s1[size] != '\0')
		size++;
	s2 = (char *)malloc(sizeof(*s2) * (size + 1));
	if (s2 == NULL)
		return (NULL);
	while (a < size)
	{
		s2[a] = s1[a];
		a++;
	}
	s2[a] = '\0';
	return (s2);
}
