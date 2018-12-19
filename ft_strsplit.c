/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 12:36:30 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/18 17:06:44 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

static size_t	wordadd(char const *s, char **n, char c, size_t y)
{
	size_t		a;
	size_t		b;
	size_t		d;
	char		**m;

	m = n;
	a = 0;
	b = 0;
	d = 0;
	while (s[a] != '\0' && b < y)
	{
		while (s[a] != '\0' && s[a] == c)
			a++;
		while (s[a] != '\0' && s[a] != c)
		{
			m[b][d] = s[a];
			a++;
			d++;
		}
		m[b][d] = '\0';
		d = 0;
		b++;
	}
	return (b);
}

static size_t	words(char const *s, char c)
{
	size_t		a;
	size_t		b;

	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		while (s[a] != '\0' && s[a] == c)
			a++;
		if (s[a] != '\0' && s[a] != c)
		{
			b++;
		}
		while (s[a] != '\0' && s[a] != c)
			a++;
	}
	return (b);
}

static void		memoryfree(char ***n)
{
	size_t	a;

	a = 0;
	while (n[a])
	{
		free(n[a]);
		a++;
	}
	free(*n);
	return ;
}

static void		mallocwords(char const *s, char ***n, char c)
{
	size_t	a;
	size_t	b;
	size_t	d;
	char	**m;

	m = *n;
	a = 0;
	b = 0;
	d = 0;
	while (s[a] != '\0')
	{
		while (s[a] && s[a] == c)
			a++;
		while (s[a] && s[a] != c)
		{
			d++;
			a++;
		}
		if (d > 0)
			if ((m[b] = malloc(sizeof(char ) * (d + 1))) == NULL)
				memoryfree(n);
		b++;
		d = 0;
	}
	m[b] = malloc(sizeof(char ) * 1);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**mass;
	size_t	y;

	if (s == NULL)
		return (NULL);
	y = words(s, c);
	if ((mass = malloc(sizeof(char *) * (y + 1))) == NULL)
		return (NULL);
	mallocwords(s, &mass, c);
	wordadd(s, mass, c, y);
	mass[y] = 0;
	return (mass);
}
