/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opt_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:44:02 by danielro          #+#    #+#             */
/*   Updated: 2022/07/22 14:55:27 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_opt_string(char *str)
{
	int	count;

	count = 0;
	if(str == NULL)
		str = "(null)";
	count += ft_putstr_fd(str);
	return (count);
}
