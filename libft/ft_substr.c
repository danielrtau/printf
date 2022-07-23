/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:05:45 by danielro          #+#    #+#             */
/*   Updated: 2022/05/21 17:47:30 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*a;
	const char		*b;
	unsigned int	c;

	if (s)
	{
		c = ft_strlen(s);
		if (start >= c || len <= 0)
		{
			a = ft_calloc(1, sizeof(char));
			return (a);
		}
		if (len > c && start < c)
			len = c - start;
		a = ft_calloc(len + 1, sizeof(char));
		if (a == NULL)
			return (NULL);
		if (start > c)
			start = c;
		b = s + start;
		ft_memmove(a, b, len);
		return (a);
	}
	return ((char *)s);
}
