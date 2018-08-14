/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <zbennett@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 07:28:27 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/18 11:11:07 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int j;

	j = 0;
	while (src[j] != '\0')
	{
		if (j < size - 1)
			dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (j);
}
