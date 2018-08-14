/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 11:12:10 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/09 14:15:51 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_num(int num)
{
	int num1;
	int num2;

	num1 = '0' + num / 10;
	num2 = '0' + num % 10;
	ft_putchar(num1);
	ft_putchar(num2);
}

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 0;
	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			ft_print_num(num1);
			ft_putchar(' ');
			ft_print_num(num2);
			if (!(num1 == 98 && num2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			num2++;
		}
		num1++;
	}
}
