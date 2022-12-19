/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:38:16 by uasci             #+#    #+#             */
/*   Updated: 2022/10/13 14:23:43 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	a;
	size_t	b;

	if (dsize <= ft_strlen(dst))
		return (dsize + ft_strlen(src));
	a = ft_strlen(dst);
	b = 0;
	while (src[b] != '\0' && a + 1 < dsize)
	{
		dst[a] = src[b];
		a++;
		b++;
	}	
	dst[a] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[b]));
}
