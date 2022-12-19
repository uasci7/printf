/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:47:02 by uasci             #+#    #+#             */
/*   Updated: 2022/10/14 01:38:25 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include<stdio.h>

void	*ft_memchr(const void *ptr, int c, size_t d)
{
	size_t	i;
	char	*str;

	if (ptr == NULL)
		return (NULL);
	i = 0;
	str = (void *)ptr;
	while (i < d)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}
