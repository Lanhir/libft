/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:46:45 by malibert          #+#    #+#             */
/*   Updated: 2018/10/12 07:27:16 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int a;

	if (*needle == '\0')
		return ((char *)haystack);
	a = ft_strlen(needle);
	while (*haystack != '\0')
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, a) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
