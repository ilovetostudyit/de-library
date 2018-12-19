/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 04:29:12 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 14:12:15 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int ch, size_t count)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			a;

	a = 0;
	c1 = (unsigned char *)dest;
	c2 = (unsigned char *)src;
	while (a < count)
	{
		c1[a] = c2[a];
		if (c1[a] == (unsigned char)ch)
			return (c1 + a + 1);
		a++;
	}
	return (NULL);
}
