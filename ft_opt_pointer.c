/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opt_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 18:13:11 by danielro          #+#    #+#             */
/*   Updated: 2022/07/22 19:51:09 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_opt_pointer(unsigned long int n)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_tohex(n, "0123456789abcdef");
	return (count);
}
