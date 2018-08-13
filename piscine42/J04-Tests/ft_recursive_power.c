/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 17:19:26 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/10 21:00:18 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int factorial;

	if (power == 0)
		return (1);
	if (nb == 0)
		factorial = 1;
	else if (nb > 0)
		factorial = nb * ft_recursive_power(nb, power - 1);
	else
		return (0);
	return (factorial);
}

int		main(void)
{
	int nb;

	nb = ft_recursive_power(5, 3);
	printf("%d", nb);
	return (0);
}
