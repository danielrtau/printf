/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:01:09 by danielro          #+#    #+#             */
/*   Updated: 2022/05/21 17:56:29 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	a;
	unsigned char	x;
	unsigned char	y;

	a = 0;
	while (n > 0 && a <= n - 1)
	{
		x = s1[a];
		y = s2[a];
		if (x != y)
			return (x - y);
		else if (x == '\0' || y == '\0')
			return (0);
		a++;
	}
	return (0);
}
