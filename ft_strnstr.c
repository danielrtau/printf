/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:57:00 by danielro          #+#    #+#             */
/*   Updated: 2022/05/13 17:05:02 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			a;
	unsigned int	b;
	char			*c;

	c = (char *)haystack;
	if (*needle == '\0')
		return (c);
	a = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= a)
	{
		b = ft_strncmp(c, needle, a);
		if (b == 0)
			return (c);
		c++;
	}
	return (0);
}
