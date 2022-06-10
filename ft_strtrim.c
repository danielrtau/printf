/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:21:34 by danielro          #+#    #+#             */
/*   Updated: 2022/05/16 18:01:51 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		b;
	char	*c;

	if (s1 == NULL || set == NULL)
		return (NULL);
	b = 0;
	while (ft_strchr(set, s1[b]) && s1[b])
		b++;
	a = ft_strlen(s1);
	while (ft_strchr(set, s1[a]) && a > 0)
		a--;
	c = ft_substr(s1, b, a - b + 1);
	return (c);
}
/*
int main(void)
{
	char *a = "hola ";
	char *b = "za";

	printf("%s\n%s", a, b);
	printf("\nResultado: %s", ft_strtrim(a, b));
	return (0);
}*/
