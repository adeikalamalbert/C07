/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:41:07 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 14:41:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*str;
	int	i;

	i = 0;
	if (min >= max)
	{
		str = NULL;
		return (0);
	}
	str = malloc((sizeof(int)) * (max - min));
	if (!str)
		return (-1);
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	*range = str;
	return (i);
}

/* int	main(void)
{
	int	i;
	int	*str_i;
	int	min;
	int	max;

	i = 0;
	str_i = &i;
	min = -10;
	max = 20;
	printf("-10 to 20: %d\n", ft_ultimate_range(&(str_i), min, max));
	if (str_i)
	{
		while (i < max - min)
		{
			printf("%d, ", str_i[i]);
			i++;
		}
	}
	free(str_i);
	return (0);
} */
