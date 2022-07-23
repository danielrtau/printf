/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:22:22 by danielro          #+#    #+#             */
/*   Updated: 2022/07/22 21:23:24 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_flag(char const *str, char srch, char sp)
{
	while (*str != sp && *str != srch)
		str++;
	if (str[0] != sp)
		return (str[0]);
	return (0);
}
