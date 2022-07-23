/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:39:27 by danielro          #+#    #+#             */
/*   Updated: 2022/07/22 21:28:51 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_specifier(char const *str, char const *srch)
{
	char	*a;

	while (*str && !ft_strchr(srch, str[0]))
		str++;
	a = ft_strchr(srch, str[0]);
	if (a[0] != '\0')
		return (str[0]);
	return (0);
}
