/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 13:12:31 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 18:00:25 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memseta(void *ptr, int value, size_t num)
{
	size_t	a;

	a = 0;
	while (a < num)
	{
		((char*)ptr)[a] = (unsigned char)value;
		a++;
	}
	return (ptr);
}

void		*ft_memalloc(size_t size)
{
	char	*s1;

	s1 = malloc(size);
	if (s1 == NULL)
		return (NULL);
	ft_memseta(s1, 0, size);
	return (s1);
}
