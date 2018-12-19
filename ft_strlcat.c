/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 13:00:52 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 14:27:22 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t num)
{
	size_t			a;
	size_t			b;
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	a = ft_strlen((char *)s1);
	b = ft_strlen((char *)s2);
	if (num < a)
		return (num + b);
	i = 0;
	while (s2[i] != '\0' && (a + i + 1) < num)
	{
		s1[a + i] = s2[i];
		i++;
	}
	s1[a + i] = '\0';
	return (a + b);
}
