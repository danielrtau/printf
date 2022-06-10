/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:06:03 by danielro          #+#    #+#             */
/*   Updated: 2022/05/21 17:56:48 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (c);
}
