/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:49:08 by danielro          #+#    #+#             */
/*   Updated: 2022/05/21 17:56:25 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = ft_strlen(src);
	b = ft_strlen(dst);
	c = 0;
	if (dstsize > b)
	{
		while (src[c] && c < (dstsize - b - 1))
		{
			dst[b + c] = src[c];
			c++;
		}
		dst[b + c] = '\0';
		return (a + b);
	}
	return (a + dstsize);
}
