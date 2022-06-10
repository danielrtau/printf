/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 11:40:12 by danielro          #+#    #+#             */
/*   Updated: 2022/05/08 12:51:33 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*a;
	size_t			b;
	unsigned int	c;

	b = ft_strlen(s) + 1;
	a = malloc(b * sizeof(char));
	if (a == NULL)
		return (NULL);
	ft_strlcpy(a, s, b);
	c = 0;
	while (s[c])
	{
		a[c] = f(c, s[c]);
		c++;
	}
	a[c] = '\0';
	return (a);
}
