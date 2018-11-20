/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 22:11:33 by malibert          #+#    #+#             */
/*   Updated: 2018/11/02 14:03:29 by malibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*nxt;

	lst = *alst;
	while (lst != NULL && alst != NULL && del != NULL && *alst != NULL)
	{
		nxt = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = nxt;
	}
	*alst = NULL;
}
