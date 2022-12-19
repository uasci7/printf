/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:28:21 by uasci             #+#    #+#             */
/*   Updated: 2022/10/20 14:29:09 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit_count(int n)
{
	int	digit;

	digit = 0;
	if (n <= 0)
		digit++;
	while (n != 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	unsigned int		nb;
	char				*array;
	int					count;

	count = digit_count(n);
	array = (char *)malloc(sizeof(char) * (count +1));
	if (array == NULL)
		return (NULL);
	nb = n;
	if (n < 0)
	{
		nb = -n;
		array[0] = '-';
	}
	while (count >= 0 && nb != 0)
	{
		array[count] = (nb % 10) + '0';
		nb /= 10;
		count--;
	}
	return (array);
}
