/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:49:55 by danielro          #+#    #+#             */
/*   Updated: 2022/06/10 16:56:46 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft.h"

int	ft_printf(char const *txt, ...)
{
	va_list ap;
	va_start(ap, txt);

	char	ch;
	char	*num;
	char	*str;
	int		count;
	va_end(ap);
	count = 0;
	while (ft_strlen(txt))
	{
		if (*txt == '%')
		{
			if (txt[1] == 'c')
			{
				ch = (char)va_arg(ap, int);
				write(1, &ch, 1);
				count++;
			}
			if (txt[1] == 's')
			{
				str = va_arg(ap, char *);
				while(*str)
				{
					write(1, &str[0], 1);
					count++;
					str++;
				}
			}
			if (txt[1] == 'd')
			{
				ch = va_arg(ap, int);
				num = ft_itoa(ch);
				while(*num)
				{
					write(1, &num[0], 1);
					count++;
					num++;
				}
			}
			txt += 2;
		}
		else
		{
			write(1, &txt[0], 1);
			count++;
			txt++;
		}
	}
	return (count);
}

int	main(void)
{
	char	*texto;
//	int		a;
	int		b;

	texto = "%u %s";
//	a = ft_printf(texto, -20, "hola");
	write(1, "\n", 1);
	b = printf(texto, -20, "hola");
	printf("\nft_printf: %d\nprintf: %d", b, b);
	return 0;
}
