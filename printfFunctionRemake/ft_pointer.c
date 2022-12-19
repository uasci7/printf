/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:13:46 by uasci             #+#    #+#             */
/*   Updated: 2022/11/21 22:13:51 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long nbr, int *a)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr < 16)
	{
		if (nbr < 10)
			*a += ft_putchar(nbr + '0');
		else
			*a += ft_putchar(base[nbr % 16]);
	}
	if (nbr >= 16)
	{
		ft_pointer(nbr / 16, a);
		ft_pointer(nbr % 16, a);
	}
	return (*a);
}
