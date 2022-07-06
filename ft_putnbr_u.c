/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:36:06 by danielro          #+#    #+#             */
/*   Updated: 2022/07/06 18:39:10 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	char	a[10];
	int		b;
	int		c;

	c = 0;
	b = -1;
	while (n / 10)
	{
		a[++b] = n % 10;
		n /= 10;
	}
	a[++b] = n;
	while (b >= 0)
	{
		c += ft_putchar_fd(a[b] + '0');
		b--;
	}
	return(c);
}
