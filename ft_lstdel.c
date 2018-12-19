/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 16:27:10 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/14 16:38:50 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *nlst;

	nlst = *alst;
	while (nlst)
	{
		del(nlst->content, nlst->content_size);
		free(nlst);
		nlst = nlst->next;
	}
	*alst = NULL;
}
