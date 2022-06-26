/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:49:55 by danielro          #+#    #+#             */
/*   Updated: 2022/06/26 18:29:21 by danielro         ###   ########.fr       */
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
			if (txt[1] == 'd' || txt[1] == 'i')
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
			if (txt[1] == 'u')
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
			if (txt[1] == 'p')
			{
				ch3 = va_arg(ap, unsigned long int);
//				printf("%lu\n", ch3);
//				num = ft_itoa_ul(ch2);
//				while(*num)
//				{
//					write(1, &num[0], 1);
//					count++;
//					num++;
//				}
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
	int		x;

	texto = "% x %s";
	x = 1;
//	a = ft_printf(texto, x, "hola");
	write(1, "\n", 1);
	b = printf(texto, x, "hola");
	printf("\nft_printf: %d\nprintf: %d", b, b);
	return 0;
}
