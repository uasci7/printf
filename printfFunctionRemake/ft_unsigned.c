/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:15:19 by uasci             #+#    #+#             */
/*   Updated: 2022/11/21 22:17:07 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int nbr, int *i)
{
	if (nbr <= 9 && nbr >= 0)
		*i += ft_putchar(nbr + '0');
	if (nbr > 9)
	{
		ft_unsigned(nbr / 10, i);
		ft_unsigned(nbr % 10, i);
	}
	return (*i);
}
