/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:39:21 by danielro          #+#    #+#             */
/*   Updated: 2022/05/16 20:28:00 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	a;
	char			*b;

	a = ft_strlen(s1);
	b = malloc((a + 1) * sizeof(char));
	if (b == NULL)
		return (NULL);
	ft_memmove(b, s1, a + 1);
	return (b);
}
