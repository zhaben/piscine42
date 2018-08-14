/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <zbennett@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 22:28:09 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/18 10:57:01 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i];
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = ((str[i] - ('a' - 'A')));
		}
		i++;
	}
	return (str);
}