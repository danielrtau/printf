/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:47:52 by danielro          #+#    #+#             */
/*   Updated: 2022/07/03 19:44:07 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	a;
	void			*b;

	a = count * size;
	b = malloc(a);
	if (b == NULL)
		return (NULL);
	ft_memset(b, 0, a);
	return (b);
}
