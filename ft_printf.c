/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:49:55 by danielro          #+#    #+#             */
/*   Updated: 2022/07/23 11:52:34 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_options(char sp, char const *txt, va_list ap);

int	ft_printf(char const *txt, ...)
{
	va_list	ap;
	int		count;
	char	sp;

	va_start(ap, txt);
	va_end(ap);
	count = 0;
	while (ft_strlen(txt))
	{
		if (*txt == '%')
		{
			sp = ft_specifier(++txt, "cspdiuxX%");
			count += ft_options(sp, txt, ap);
			if (txt[0] == '\0')
				break ;
			txt = ft_strchr(txt, sp);
		}
		else
			count += ft_putchar(txt[0]);
		txt++;
	}
	return (count);
}

int	ft_options(char sp, char const *txt, va_list ap)
{
	int	count;

	count = 0;
	if (sp == 'c')
		count += ft_putchar((char)va_arg(ap, int));
	else if (sp == 's')
		count += ft_opt_string(va_arg(ap, char *));
	else if (sp == 'd' || sp == 'i')
		count += ft_opt_numbr(va_arg(ap, int), sp, txt);
	else if (sp == 'u')
		count += ft_putnbr_u(va_arg(ap, unsigned int));
	else if (sp == 'x' || sp == 'X')
		count += ft_opt_hexa(va_arg(ap, unsigned int), sp, txt);
	else if (sp == 'p')
		count += ft_opt_pointer(va_arg(ap, unsigned long int));
	else
		count += ft_putchar('%');
	return (count);
}
/*
int	main(void)
{
	int		a;
	int		b;
	int		x;

	x = 2147483647;
	printf("Funcion original printf:\n");
	a = printf("el numero es: %d", x);
	printf("\ntotal: %d\nFuncion ft_printf:\n", a);
	b = ft_printf("el numero es: %d", x);
	printf("\ntotal: %d", b);
	return (0);
}*/
