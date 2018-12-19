/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 13:29:15 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 18:04:52 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_memseta(void *ptr, int value, size_t num)
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

static void		*ft_memalloca(size_t size)
{
	char	*s1;

	s1 = malloc(size);
	if (s1 == NULL)
		return (NULL);
	ft_memseta(s1, 0, size);
	return (s1);
}

char			*ft_strnew(size_t size)
{
	char	*str;
	size_t	counter;

	counter = size;
	str = ft_memalloca(size + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}
