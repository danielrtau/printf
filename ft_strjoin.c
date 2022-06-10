/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:10:28 by danielro          #+#    #+#             */
/*   Updated: 2022/05/21 17:56:22 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	char	*c;

	a = ft_strlen(s1);
	b = ft_strlen(s2);
	c = malloc((a + b + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	ft_strlcpy(c, s1, a + 1);
	ft_strlcat(c, s2, a + b + 1);
	return (c);
}
