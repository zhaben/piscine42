/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <zbennett@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 20:26:27 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/18 10:55:42 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
