/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <zbennett@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 04:05:31 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/23 04:07:09 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *table;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	table = (int*)malloc(sizeof(int) * (max - min));
	if (table == NULL)
		return (0);
	while (min <= max - 1)
	{
		table[i] = min;
		min++;
		i++;
	}
	range = &table;
	return (i);
}

int		main(int argc, char *argv[])
{
	int **range;
	int min;
	int max;

	min = atoi(argv[1]);
	max = atoi(argv[2]);
	if (argc != 3)
	{
		printf("%s", "error");
	}
	if (argc == 3)
	{
		printf("%d", ft_ultimate_range(range, min, max));
	}
	return (0);
}
