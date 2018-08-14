/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <zbennett@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 07:13:41 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/18 11:10:15 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	int				j;

	len = 0;
	j = 0;
	while (dest[len])
		len++;
	while (src[j] != '\0')
	{
		if (len < size - 1)
			dest[len] = src[j];
		len++;
		j++;
	}
	dest[len - 1] = '\0';
	return (len);
}
