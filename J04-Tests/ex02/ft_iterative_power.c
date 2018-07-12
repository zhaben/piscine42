/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 19:01:44 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/11 13:36:57 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int answr;
	int i;
	
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	i = 1;
	answr = nb;
	
	while (i < power)
	{
		answr *= nb;
		i++;
	}
	return (answr);
}

int		main(void)
{
	int l;

	l = ft_iterative_power(5, 2);
	printf("%i\n", l);
	return (0);
}
