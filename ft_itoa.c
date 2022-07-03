/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:06:03 by danielro          #+#    #+#             */
/*   Updated: 2022/07/03 17:39:08 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	num[11];
	int		b;
	char	*c;
	long	d;

	b = 10;
	d = n;
	ft_memset(num, 45, 11);
	if (n < 0)
		d *= -1;
	while (d / 10)
	{
		num[b--] = (d % 10) + '0';
		d /= 10;
	}
	num[b] = (d % 10) + '0';
	if (n < 0)
		b--;
	c = ft_calloc((12 - b), sizeof(char));
	if (c == NULL)
		return (NULL);
	ft_memmove(c, num + b, 11 - b);
	free(c);
	return (c);
}
