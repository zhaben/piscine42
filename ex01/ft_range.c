/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <zbennett@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 04:01:59 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/23 04:15:44 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *table;
	int len;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	table = (int*)malloc(sizeof(int) * len);
	while (i < len)
	{
		table[i] = min;
		min++;
		i++;
	}
	return (table);
}

int		main(int argc, char *argv[])
{
	int min;
	int max;
	int i;
	int len;
	int *table;

	i = 0;
	if (argc != 3)
	{
		printf("%s", "error");
	}
	else
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		len = max - min;
		table = ft_range(min, max);
		while (i < len)
		{
			printf("%i", table[i]);
			i++;
		}
	}
	return (0);
}
