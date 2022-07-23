/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:39:09 by danielro          #+#    #+#             */
/*   Updated: 2022/05/21 23:31:29 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*a; 
	t_list	*b;
	t_list	*c;

	a = ft_lstnew("segundo");
	b = ft_lstnew("tercero");
	c = ft_lstnew("primero");
	a->next = b;
	b->next = NULL;
	while (a)
	{
		printf("%s\n", a->content);
		a = a->next;
	}
	ft_lstadd_front(&a, c);
	free(a);
	while (a)
	{
		printf("%s\n", a->content);
		a = a->next;
	}
	return (0);
}*/
