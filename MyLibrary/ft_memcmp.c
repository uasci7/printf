/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:53:18 by uasci             #+#    #+#             */
/*   Updated: 2022/10/20 15:08:50 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include<stdio.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t		i;
	char		*str1;
	char		*str2;

	if (ptr1 == NULL || ptr2 == NULL)
		return (0);
	i = 0;
	str1 = (void *)ptr1;
	str2 = (void *)ptr2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
