/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:49:55 by danielro          #+#    #+#             */
/*   Updated: 2022/06/28 14:03:25 by danielro         ###   ########.fr       */
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

	char			ch;
	int				ch1;
	unsigned int	ch2;
	unsigned long int	ch3;
	char			*num;
	char			*str;
	int				count;
	va_end(ap);
	count = 0;
	while (ft_strlen(txt))
	{
		if (*txt == '%')
		{
			while(!(ft_strchr("cspdiuxX", txt[0])))
					txt++;
//			txt++;
			if (txt[0] == 'c')
			{
				ch = (char)va_arg(ap, int);
				write(1, &ch, 1);
				count++;
			}
			if (txt[0] == 's')
			{
				str = va_arg(ap, char *);
				while(*str)
				{
					write(1, &str[0], 1);
					count++;
					str++;
				}
			}
			if (txt[0] == 'd' || txt[0] == 'i')
			{
				ch1 = va_arg(ap, int);
				num = ft_itoa(ch1);
				while(*num)
				{
					write(1, &num[0], 1);
					count++;
					num++;
				}
			}
			if (txt[0] == 'u')
			{
				ch2 = va_arg(ap, unsigned int);
				num = ft_itoa_ul(ch2);
				while(*num)
				{
					write(1, &num[0], 1);
					count++;
					num++;
				}
			}
			if (txt[0] == 'x')
			{
				ch3 = va_arg(ap, unsigned long int);
				num = ft_tohex(ch3);
				while(*num)
				{
					write(1, &num[0], 1);
					count++;
					num++;
				}
			}
			txt++;
//			txt += 2;
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
	int		a;
	int		b;
	int		x;

	texto = "%          c %      s %d final";
	x = 48;
	a = ft_printf(texto, x, "hola", 453);
	write(1, "\n", 1);
	b = printf(texto, x, "hola", 453);
	printf("\nft_printf: %d\nprintf: %d", a, b);
	return 0;
}
