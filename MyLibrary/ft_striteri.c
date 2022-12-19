/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:27:27 by uasci             #+#    #+#             */
/*   Updated: 2022/10/20 14:54:36 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	*f(unsigned int i, char *c)
{
	if (*(c +i) != '\0')
		*c = *(c + i);
	else if (*(c + i) == '\0')
		*c = *(c - i);
	return (&c);
}
*/
