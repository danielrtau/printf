/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:49:55 by danielro          #+#    #+#             */
/*   Updated: 2022/07/03 23:09:33 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

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
//			while(!(ft_strchr("cspdiuxX", txt[0])))
					txt++;
			if (txt[0] == 'c')
			{
				ch = (char)va_arg(ap, int);
				write(1, &ch, 1);
				count++;
			}
			if (txt[0] == 's')
			{
				str = va_arg(ap, char *);
				if(str == NULL)
					str = "(null)";
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
				count += ft_putnbr_fd(ch1);
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
				ch3 = va_arg(ap, unsigned int);
				count += ft_tohex(ch3, "0123456789abcdef");
			}
			if (txt[0] == 'X')
			{
				ch3 = va_arg(ap, unsigned int);
				count += ft_tohex(ch3, "0123456789ABCDEF");
			}
			if (txt[0] == 'p')
			{
				ch3 = va_arg(ap, unsigned long int);
				count += ft_putstr_fd("0x");
				count += ft_tohex(ch3, "0123456789abcdef");
			}
			if (txt[0] == '%')
			{
				count += ft_putchar_fd('%');
				num++;
			}
			txt++;
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
/*
int	main(void)
{
	char	*texto;
	int		a;
	int		b;
	int		x;

	texto = "%X";
	x = 48;
	a = printf(texto, 9223372036854775807LL);
	printf("\n");
	b = ft_printf(texto, 9223372036854775807LL);
	printf("\nprintf: %d\nft_printf: %d", a, b);
	return 0;
}*/
