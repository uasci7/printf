/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:39:08 by uasci             #+#    #+#             */
/*   Updated: 2022/10/20 18:45:00 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	**ft_split(char const *s, char c)
{
	char	**bp;
	char	*n;
	int		i;
	int		j;
	int		count;

	i = 0;
	if (!s)
		return (NULL);
	n = (char *)s;
	bp = malloc(100 * sizeof(char *));
	count = 0;
	while (*(n + i))
	{
		while (*(n + i) == c)
			i++;
		{
			j = i;
			while (*(n + i) && *(n + i) != c)
				i++;
			if (++count && *(n + i))
				n[i++] = 0;
			bp[count - 1] = (n + j);
		}
	}
	bp[++count] = 0;
	return (bp);
}
int main()
{
	char s[] = "      split    afadfdf  asdfasdfas ";
	char c = ' ';
	char **array;
	int i = 0;

	array = ft_split(s, c);
	
	while (array[i])
		printf("%s\n", array[i++]);
}
