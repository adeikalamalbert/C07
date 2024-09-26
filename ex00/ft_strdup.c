/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:38:01 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 16:20:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		str_l;
	char	*dest;

	str_l = ft_strlen(str);
	dest = (char *)malloc(sizeof(char) * (str_l + 1));
	if (!dest)
		return (0);
	i = 0;
	while (i < str_l)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	*str;

	str = "Hello World";
	printf("%s", ft_strdup(str));
	return (0);
} */
