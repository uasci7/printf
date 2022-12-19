/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:35:25 by uasci             #+#    #+#             */
/*   Updated: 2022/10/16 19:42:50 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*array;

	i = 0;
	if (s != NULL)
	{
		array = (char *)malloc(sizeof(char) * (len + 1));
		if (array == NULL)
		{
			return (NULL);
		}
		while (start < ft_strlen(s) && i < len)
		{
			array[i] = s[start];
			i++;
			start++;
		}
		array[i] = '\0';
		return (array);
	}
	return (0);
}
