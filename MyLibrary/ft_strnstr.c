/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:15:01 by uasci             #+#    #+#             */
/*   Updated: 2022/10/15 12:55:23 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *src, const char *dst, size_t len)
{
	size_t	i;
	int		b;

	i = 0;
	b = 0;
	if (dst[i] == '\0')
	{
		return ((char *)src);
	}	
	while (src[i] != '\0' && i < len)
	{
		while (dst[b] != '\0' && src[i + b] == dst[b] && i + b < len)
		{
			b++;
		}
		if (dst[b] == '\0')
		{
			return ((char *)(src + i));
		}
		i++;
	}
	return (NULL);
}
