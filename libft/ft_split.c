/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:41:51 by danielro          #+#    #+#             */
/*   Updated: 2022/05/21 17:56:34 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(const char *s, char c, int a);
char	**ft_aux(char const *s, char c, int a, int f);

char	**ft_split(char const *s, char c)
{
	int		a;

	a = ft_count(s, c, 0);
	return (ft_aux(s, c, a, 0));
}

int	ft_count(const char *s, char c, int a)
{
	char	*d;

	d = (char *)s;
	while (ft_strlen(s++) > 0)
	{
		if (*d != c && (d[1] == c || ft_strlen(s) == 0))
			a++;
		d++;
	}
	return (a);
}

char	**ft_aux(char const *s, char c, int a, int f)
{
	char	**b;
	char	*e;
	char	*d;
	int		g;

	g = f;
	b = ft_calloc(a + 1, sizeof(char *));
	if (b == NULL)
		return (NULL);
	while (a-- > 0)
	{
		f = 0;
		while (*s == c)
			s++;
		d = (char *)s;
		while (*d && *d++ != c)
			f++;
		e = ft_calloc(f + 1, sizeof(char));
		if (e == NULL)
			return (NULL);
		ft_memmove(e, s, f);
		s += f;
		b[g++] = e;
	}
	return (b);
}
/*
int	main(void)
{
	int i = 0;
	char **tab;
		
	tab = ft_split("hello! hola como ", ' ');
	
	while (i < 8)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}*/
