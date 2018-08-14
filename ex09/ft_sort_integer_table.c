/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 14:26:38 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/14 15:51:49 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *table, int size)
{
	int	i;
	int tmp;

	i = 0;
	while (i < size)
	{
		if (table[i] > table[i + 1])
		{
			tmp = table[i + 1];
			table[i + 1] = table[i];
			table[i] = tmp;
			i = 0;
		}
		i++;
	}
}
