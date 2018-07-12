/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 17:19:26 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/11 13:38:03 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int answr;
	
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		answr = 1;
	else if (nb > 0)
		answr = nb * ft_recursive_power(nb, power - 1);
	else
		return (0);
	return (answr);
}

int		main(void)
{
	int answr;

	answr = ft_recursive_power(5, 2);
	printf("%d", answr);
	return (0);
}
