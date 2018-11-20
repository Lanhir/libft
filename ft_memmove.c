/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:49:58 by malibert          #+#    #+#             */
/*   Updated: 2018/10/18 23:58:00 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*tp_src;
	unsigned char		*tp_dst;

	tp_src = src;
	tp_dst = dst;
	if (tp_dst >= tp_src)
	{
		while (len > 0)
		{
			tp_dst[len - 1] = tp_src[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(tp_dst, tp_src, len);
	return (dst);
}
