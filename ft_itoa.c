/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 10:04:20 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 18:58:12 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char				*ft_strdupa(const char *src)
{
	size_t		a;
	size_t		b;
	char		*str;

	b = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (b + 1));
	if (str == NULL)
		return (NULL);
	a = 0;
	while (a < b)
	{
		str[a] = src[a];
		a++;
	}
	str[a] = '\0';
	return (str);
}

static int				ft_leni(int n)
{
	int	a;

	a = 0;
	while (n != 0)
	{
		n = n / 10;
		a++;
	}
	return (a);
}

static unsigned char	*strcmplt(unsigned char *str1, int e, int min, int n)
{
	while (e >= min)
	{
		str1[e] = (n % 10) + '0';
		n = n / 10;
		e--;
	}
	return (str1);
}

char					*ft_itoa(int n)
{
	int				a;
	int				min;
	unsigned char	*str1;

	if (n == 0)
		return (ft_strdupa("0"));
	if (n == -2147483648)
		return (ft_strdupa("-2147483648"));
	min = 0;
	a = ft_leni(n) - 1;
	if ((str1 = (unsigned char*)malloc((unsigned char)(a + 3))) == NULL)
		return (NULL);
	if (n < 0)
	{
		n = 0 - n;
		str1[0] = '-';
		a = a + 1;
		min = 1;
	}
	str1 = strcmplt(str1, a, min, n);
	str1[a + 1] = '\0';
	return ((char*)str1);
	free(str1);
}
