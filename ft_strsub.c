/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 16:11:13 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/14 13:35:19 by ehaggon          ###   ########.fr       */
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

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	b;
	size_t	c;

	if (s == NULL)
		return (NULL);
	if ((a = ft_memalloca(len + 1)) == NULL)
		return (NULL);
	b = start + len;
	c = start;
	while (start < b)
	{
		a[start - c] = s[start];
		start++;
	}
	a[len] = '\0';
	return (a);
}
