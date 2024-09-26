/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadeikal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 02:06:15 by aadeikal          #+#    #+#             */
/*   Updated: 2024/09/25 17:22:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			str[k++] = sep[j++];
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

/* int	main(void)
{
	char	*teststr[2];
	char	*separator;
	int		s;

	teststr[0] = "Hello";
	teststr[1] = "World";
	separator = " ";
	printf("%s", ft_strjoin(2, teststr, separator));
	return (0);
}
 */
