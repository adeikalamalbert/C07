/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:00:10 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 14:08:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_absolute(int nb)
{
	if (nb < 0)
		nb = -nb;
	return (nb);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*str;
	int	size;

	if (min >= max)
	{
		str = NULL;
		return (0);
	}
	size = ft_absolute(max - min);
	str = malloc((sizeof(int)) * size);
	i = -1;
	if (min < max)
	{
		while (++i < size)
			str[i] = min + i;
	}
	return (str);
}

/* int	main(void)
{
	int	i;
	int	*str_i;
	int	min;
	int	max;

	i = 0;
	min = -10;
	max = 20;
	str_i = ft_range(-10, 20);
	printf("-10 to 20: ");
	while(i < max - min)
	{
		printf("%d, ", str_i[i]);
		i++;
	}
	return (0);
} */
