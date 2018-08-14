/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <zbennett@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 04:01:41 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/23 04:14:49 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;
	int		i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char*)malloc(sizeof(char) * (len + 1));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int		main(int argc, char *argv[])
{
	char *src;

	src = argv[1];
	if (argc == 2)
		printf("Result: %s", ft_strdup(src));
	return (0);
}
