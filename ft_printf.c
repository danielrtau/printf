/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:49:55 by danielro          #+#    #+#             */
/*   Updated: 2022/07/22 19:12:08 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_options(char sp, char const *txt, va_list ap);

int	ft_printf(char const *txt, ...)
{
	va_list ap;
	va_start(ap, txt);

	int				count;
	char			sp;
	va_end(ap);
	count = 0;
	while (ft_strlen(txt))
	{
		if (*txt == '%')
		{
			sp = ft_specifier(++txt, "cspdiuxX%");
			count += ft_options(sp, txt, ap);
			if (txt[0] == '\0')
				break;
			txt = ft_strchr(txt, sp);
		}
		else
			count += ft_putchar_fd(txt[0]);
		txt++;
	}
	return (count);
}

int	ft_options(char sp, char const *txt, va_list ap)
{
	int	count;

	count = 0;
	if (sp == 'c')
		count += ft_putchar_fd((char)va_arg(ap, int));
	if (sp == 's')
		count += ft_opt_string(va_arg(ap, char *));
	if (sp == 'd' || sp == 'i')
		count += ft_opt_numbr(va_arg(ap, int), sp, txt);
	if (sp == 'u')
		count += ft_putnbr_u(va_arg(ap, unsigned int));
	if (sp == 'x' || sp == 'X')
		count += ft_opt_hexa(va_arg(ap, unsigned int), sp, txt);
	if (sp == 'p')
		count += ft_opt_pointer(va_arg(ap, unsigned long int));
	if (sp == '%')
		count += ft_putchar_fd('%');
	return (count);
}
/*
int	main(void)
{
	char	*texto;
	int		a;
	int		b;
	int		x;

	texto = "pruebaaa ghghg¨{%        +   x }fhhdhdf, %";
	x = 42;
	a = printf("pruebaaa ghghg¨{%X }fhhdhdf, ", x);
//	a = printf(texto, x);
	printf("\n");
	b = ft_printf("pruebaaa ghghg¨{%X }fhhdhdf, ", x);
//	b = ft_printf(texto, x);
	printf("\nprintf: %d\nft_printf: %d", a, b);
	return (0);
}*/
