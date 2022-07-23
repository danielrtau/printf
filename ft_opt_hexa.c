/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opt_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:37:17 by danielro          #+#    #+#             */
/*   Updated: 2022/07/22 19:50:30 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_opt_hexa(unsigned int n, char sp, char const *txt)
{
	int		count;
	char	flag;

	count = 0;
	flag = ft_flag(txt, '#', sp);
	if (sp == 'x')
	{
		if (flag == '#' && n != 0)
			count += ft_putstr("0x");
		count += ft_tohex(n, "0123456789abcdef");
	}
	if (sp == 'X')
	{
		if (flag == '#' && n != 0)
			count += ft_putstr("0X");
		count += ft_tohex(n, "0123456789ABCDEF");
	}
	return (count);
}
