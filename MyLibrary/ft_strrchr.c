/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:16:51 by uasci             #+#    #+#             */
/*   Updated: 2022/10/20 16:59:58 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include<stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (c == '\0')
	{
		return ((char *)&str[i]);
	}
	i--;
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}
