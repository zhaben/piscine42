/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 19:01:44 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/10 21:01:29 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int factorial;

	if (power == 0)
		return (1);
	if (nb == 0)
		factorial = 1;
	else if (nb > 0)
		factorial = nb * ft_iterative_power(nb, power - 1);
	else
		return (0);
	return (factorial);
}

int		main(void)
{
	int factn;

	factn = ft_iterative_power(10, 0);
	printf("%i\n", factn);
	return (0);
}
