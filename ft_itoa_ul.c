/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_ul.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:39:07 by danielro          #+#    #+#             */
/*   Updated: 2022/06/26 14:51:29 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa_ul(unsigned int n)
{
	char	num[11];
	int		b;
	char	*c;

	b = 10;
	while (n / 10)
	{
		num[b--] = (n % 10) + '0';
		n /= 10;
	}
	num[b] = (n % 10) + '0';
	if (n < 0)
		b--;
	c = ft_calloc((12 - b), sizeof(char));
	if (c == NULL)
		return (NULL);
	ft_memmove(c, num + b, 11 - b);
	return (c);
}
/*
int	main(void)
{
	int	a;
	char	*x;

	a = -2147483648;
	x = ft_itoa_ul(a);
	printf("%s", x);
	return 0;
}*/
