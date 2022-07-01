/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:48:37 by danielro          #+#    #+#             */
/*   Updated: 2022/07/01 21:55:20 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*i;
	const char	*j;

	j = src + len - 1;
	if (src < dst)
	{
		i = dst + len - 1;
		while (len--)
			*i-- = *j--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
