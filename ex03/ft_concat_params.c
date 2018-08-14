/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <zbennett@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 04:09:33 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/23 04:09:36 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		len(char **str)
{
	int i;
	int j;
	int size;

	i = 0;
	j = 0;
	size = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			j++;
			size++;
		}
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*concat_str;
	int		i;
	int		j;
	int		z;

	i = 1;
	j = 0;
	z = 0;
	concat_str = (char*)malloc(sizeof(char) * len(argv) + argc);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			concat_str[z] = argv[i][j];
			j++;
			z++;
		}
		i++;
		concat_str[z] = '\n';
		z++;
	}
	concat_str[z] = '\0';
	return (concat_str);
}

int		main(int argc, char *argv[])
{
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}
