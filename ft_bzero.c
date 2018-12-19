/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 04:03:49 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 14:06:08 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	ft_bzero(void *ptr, size_t num)
{
	size_t a;

	a = 0;
	while (a < num)
	{
		((char*)ptr)[a] = '\0';
		a++;
	}
}
