/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 20:53:33 by malibert          #+#    #+#             */
/*   Updated: 2018/10/22 20:57:51 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_tbc(const char *s, char c)
{
	int	ct;
	int	page;

	page = 0;
	ct = 0;
	while (*s != '\0')
	{
		if (page == 1 && *s == c)
			page = 0;
		if (page == 0 && *s != c)
		{
			page = 1;
			ct++;
		}
		s++;
	}
	return (ct);
}

static int	ft_wlen(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	nb_word = ft_tbc((const char *)s, c);
	if (!(t = (char **)malloc(sizeof(*t) * (ft_tbc((const char *)s, c) + 1))))
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[i] = ft_strsub((const char *)s, 0, ft_wlen((const char *)s, c));
		if (t[i] == NULL)
		{
			free(t);
			return (NULL);
		}
		s = s + ft_wlen(s, c);
		i++;
	}
	t[i] = NULL;
	return (t);
}
