/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 16:34:43 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/14 13:44:20 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static int		ft_chars(char const *c)
{
	size_t	a;
	int		b;

	a = 0;
	b = 0;
	while (c[a])
	{
		if (ft_isspace(c[a]) == 0)
			b++;
		a++;
	}
	return (b);
}

static size_t	ft_sizemal(char const *s)
{
	double	m;
	size_t	i;
	int		d;

	d = 0;
	m = 0;
	i = 0;
	while (s[i] != '\0' && ft_isspace(s[i]) != 0)
		i++;
	while (s[i] != '\0' && d != ft_chars(s))
	{
		i++;
		if (s[i] != '\0' && ft_isspace(s[i]) == 1)
			m = m + 0.5;
		if (s[i] != '\0' && ft_isspace(s[i]) == 0)
			m++;
	}
	return ((size_t)m);
}

static size_t	strchange(char const *s, char *a)
{
	size_t	b;
	size_t	c;
	int		d;

	b = 0;
	c = 0;
	d = 0;
	while (s[b] != '\0')
	{
		while (s[b] != '\0' && ft_isspace(s[b]) == 1 && d == 0)
			b++;
		while (s[b] != '\0' && d != ft_chars(s))
		{
			if (ft_isspace(s[b]) == 0)
				d++;
			a[c] = s[b];
			b++;
			c++;
		}
		b++;
	}
	return (c);
}

char			*ft_strtrim(char const *s)
{
	char	*a;
	size_t	b;

	if (s == NULL)
		return (NULL);
	b = ft_sizemal(s);
	if ((a = malloc(b)) == NULL)
		return (NULL);
	b = strchange(s, a);
	a[b] = '\0';
	return (a);
}
