/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:31:59 by uasci             #+#    #+#             */
/*   Updated: 2022/10/20 13:37:08 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (c == '\0')
		return (0);
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return ((char *)b);
}
