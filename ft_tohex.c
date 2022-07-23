/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 22:26:59 by danielro          #+#    #+#             */
/*   Updated: 2022/07/22 21:29:19 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_tohex(unsigned long int n, char *str)
{
	char	num[16];
	int		a;
	int		b;

	b = 0;
	while (n / 16)
	{
		a = n % 16;
		num[b++] = str[a];
		n /= 16;
	}
	num[b] = str[n];
	a = 0;
	while (b >= 0)
		a += ft_putchar(num[b--]);
	return (a);
}
