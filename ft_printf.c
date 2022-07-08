/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:49:55 by danielro          #+#    #+#             */
/*   Updated: 2022/07/08 18:59:56 by danielro         ###   ########.fr       */
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
	char			*str;
	int				count;
	char			sp;
	char			flag;
	va_end(ap);
	count = 0;
	while (ft_strlen(txt))
	{
		if (*txt == '%')
		{
			sp = ft_printf_specifier(++txt, "cspdiuxX%");
			if (sp == 'c')
			{
				ch = (char)va_arg(ap, int);
				write(1, &ch, 1);
				count++;
			}
			if (sp == 's')
			{
				str = va_arg(ap, char *);
				if(str == NULL)
					str = "(null)";
				count += ft_putstr_fd(str);
			}
			if (sp == 'd' || sp == 'i')
			{
				flag = ft_printf_specifier(txt, "+");
				if (flag == '+')
					count += ft_putchar_fd('+');
				else
					flag = ft_printf_specifier(txt, " ");
				if (flag == ' ')
					count += ft_putchar_fd(' ');
				ch1 = va_arg(ap, int);
				count += ft_putnbr_fd(ch1);
				txt = ft_strchr(txt, sp);
			}
			if (sp == 'u')
			{
				ch2 = va_arg(ap, unsigned int);
				count += ft_putnbr_u(ch2);
			}
			if (sp == 'x')
			{
				flag = ft_printf_specifier(txt, "#");
				if (flag == '#')
					count += ft_putstr_fd("0x");
				ch3 = va_arg(ap, unsigned int);
				count += ft_tohex(ch3, "0123456789abcdef");
				txt = ft_strchr(txt, sp);
			}
			if (sp == 'X')
			{
				flag = ft_printf_specifier(txt, "#");
				if (flag == '#')
					count += ft_putstr_fd("0X");
				ch3 = va_arg(ap, unsigned int);
				count += ft_tohex(ch3, "0123456789ABCDEF");
				txt = ft_strchr(txt, sp);
			}
			if (sp == 'p')
			{
				ch3 = va_arg(ap, unsigned long int);
				count += ft_putstr_fd("0x");
				count += ft_tohex(ch3, "0123456789faabcdef");
			}
			if (sp == '%')
				count += ft_putchar_fd('%');
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

int	main(void)
{
	char	*texto;
	int		a;
	int		b;
	int		x;

	texto = "hola %  #   + x";
	x = 48;
	a = printf(texto, x);
	printf("\n");
	b = ft_printf(texto, x);
	printf("\nprintf: %d\nft_printf: %d", a, b);
	return (0);
}
