/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:43:07 by danielro          #+#    #+#             */
/*   Updated: 2022/07/18 20:31:09 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_flag(char const *str, char srch, char sp)
{
	while (*str != sp && *str != srch)
		str++;
	if(str[0] != sp)
		return(str[0]);
	return(0);
}
