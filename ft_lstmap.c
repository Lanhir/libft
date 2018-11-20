/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 23:55:37 by malibert          #+#    #+#             */
/*   Updated: 2018/10/23 01:03:51 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*flink;
	t_list	*nlst;

	if (lst == NULL || f == NULL)
		return (NULL);
	flink = f(lst);
	nlst = flink;
	while (lst->next != NULL)
	{
		lst = lst->next;
		if (!(nlst->next = f(lst)))
		{
			free(nlst->next);
			return (NULL);
		}
		nlst = nlst->next;
	}
	return (flink);
}
