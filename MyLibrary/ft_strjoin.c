/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:46:22 by uasci             #+#    #+#             */
/*   Updated: 2022/10/20 18:31:31 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	size_t	s1len;
	size_t	s2len;
	char	*array;

	k = 0;
	i = 0;
	if (s1 != NULL)
	{
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	array = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (array == NULL)
		return (NULL);
	while (s1[i])
	{
		array[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		array[i] = s2[k];
		i++;
		k++;
	}
	array[i] = '\0';
	return (array);
	}
	return (0);
}
