/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:14:37 by uasci             #+#    #+#             */
/*   Updated: 2022/11/21 22:14:39 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_upx(unsigned int nbr, int *i);
int		ft_x(unsigned int nbr, int *i);
int		ft_pointer(unsigned long nbr, int *a);
int		ft_printf(const char *str, ...);
int		ft_printstr(char *str);
int		ft_putnbr(int nbr, int *a);
int		ft_unsigned(unsigned int nbr, int *i);

#endif