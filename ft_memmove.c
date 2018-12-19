/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 04:33:56 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 14:16:45 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t num)
{
	unsigned char	*srcc;
	unsigned char	*dstc;
	size_t			i;

	i = 0;
	srcc = (unsigned char *)src;
	dstc = (unsigned char *)dst;
	if (srcc < dstc)
		while ((int)(--num) >= 0)
			*(dstc + num) = *(srcc + num);
	else
		while (i < num)
		{
			*(dstc + i) = *(srcc + i);
			i = i + 1;
		}
	return (dst);
}
