/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:37:44 by danielro          #+#    #+#             */
/*   Updated: 2022/07/22 21:35:53 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);
int		ft_tohex(unsigned long int n, char *str);
int		ft_printf(char const *txt, ...);
char	ft_specifier(char const *str, char const *srch);
char	ft_flag(char const *str, char srch, char sp);
int		ft_opt_string(char *str);
int		ft_opt_numbr(int n, char sp, char const *txt);
int		ft_opt_hexa(unsigned int n, char sp, char const *txt);
int		ft_opt_pointer(unsigned long int n);

#endif
