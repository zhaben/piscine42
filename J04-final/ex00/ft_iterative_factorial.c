/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 12:23:04 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/07 16:45:04 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int factorial;
	int i;

	i = 1;
	factorial = nb;
	if (nb == 0)
	{
		factorial = 1;
	}
	else if (nb > 0)
	{
		while (i < nb)
		{
			factorial = factorial * (nb - i);
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (factorial);
}
