/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 15:41:59 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/15 23:24:24 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strrev(char *str)
{
	int		length;
	int		i;
	char	tmp;

	i = 0;
	length = ft_strlen(str) - 1;
	while (i < length)
	{
		tmp = str[i];
		str[i] = str[length];
		str[length] = tmp;
		i++;
		length--;
	}
	return (str);
}
