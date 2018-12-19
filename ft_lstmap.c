/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 18:13:37 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/14 19:09:32 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *nlist;
	t_list *alist;

	if (lst == NULL || f == NULL)
		return (NULL);
	alist = f(lst);
	nlist = alist;
	while (lst->next)
	{
		lst = lst->next;
		if (!(alist->next = f(lst)))
		{
			free(alist->next);
			return (NULL);
		}
		alist = alist->next;
	}
	return (nlist);
}
