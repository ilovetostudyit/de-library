/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 04:19:01 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 14:14:39 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (num == 0 || dest == src)
		return (dest);
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	while (num > 0)
	{
		*s1++ = *s2++;
		num--;
	}
	return (dest);
}
