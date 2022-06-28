/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:52:54 by danielro          #+#    #+#             */
/*   Updated: 2022/06/28 11:19:51 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_tohex(unsigned long int n)
{
	char	num[8];
	int		a;
	int		b;
	char	*c;

	b = 7;
	while(n / 16)
	{
		a = n % 16;
		num[b--] = "0123456789abcdef"[a];
		n /= 16;
	}
	num[b] = "0123456789abcdef"[n];
	c = ft_calloc((9 - b), sizeof(char));
	if (c == NULL)
		return (NULL);
	ft_memmove(c, num + b, 8 - b);
	return (c);
}
