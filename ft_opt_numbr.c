/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opt_numbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:00:22 by danielro          #+#    #+#             */
/*   Updated: 2022/07/22 18:25:13 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_opt_numbr(int n, char sp, char const *txt)
{
	int		count;
	char	flag;

	count = 0;
	flag = ft_flag(txt, '+', sp);
	if (flag == '+' && n >= 0)
		count += ft_putchar_fd('+');
	else
		flag = ft_flag(txt, ' ', sp);
	if (flag == ' ' && n >= 0)
		count += ft_putchar_fd(' ');
	count += ft_putnbr_fd(n);
	return (count);
}
