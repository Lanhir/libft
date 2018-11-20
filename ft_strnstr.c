/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 20:55:51 by malibert          #+#    #+#             */
/*   Updated: 2018/10/18 19:22:32 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	if (*needle == '\0')
		return ((char *)haystack);
	a = ft_strlen(needle);
	b = 0;
	while (*haystack != '\0' && len >= a)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, a) == 0)
		{
			if (b + a > len)
				return (NULL);
			return ((char *)haystack);
		}
		b++;
		haystack++;
	}
	return (NULL);
}
