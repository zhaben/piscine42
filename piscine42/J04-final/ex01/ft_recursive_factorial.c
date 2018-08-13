/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 16:36:41 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/10 18:51:05 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int factorial;

	if (nb == 0)
	{
		factorial = 1;
	}
	else if (nb > 0)
	{
		factorial = nb * ft_recursive_factorial(nb - 1);
	}
	else
	{
		return (0);
	}
	return (factorial);
}
