/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 23:53:06 by danielro          #+#    #+#             */
/*   Updated: 2022/05/22 00:03:16 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	a;

	a = 0;
	while (lst)
	{
		a++;
		lst = lst->next;
	}
	return (a);
}
/*
int	main(void)
{
	t_list	*a; 
	t_list	*b;
	t_list	*c;
	int		i;

	a = ft_lstnew("segundo");
	b = ft_lstnew("tercero");
	c = ft_lstnew("primero");
	a->next = b;
	b->next = c;
	c->next = NULL;
	i = ft_lstsize(a);
	printf("%d", i);
	return (0);
}*/
