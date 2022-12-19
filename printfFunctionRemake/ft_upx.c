/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:15:59 by uasci             #+#    #+#             */
/*   Updated: 2022/12/02 06:52:10 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upx(unsigned int nbr, int *a)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nbr < 16)
	{
		if (nbr < 10)
			*a += ft_putchar(nbr + '0');
		else
			*a += ft_putchar(base[nbr % 16]);
	}
	if (nbr >= 16)
	{
		ft_upx(nbr / 16, a);
		ft_upx(nbr % 16, a);
	}
	return (*a);
}
