/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <zbennett@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 23:51:43 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/25 23:54:06 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*copy_word(char *src)
{
	int		i;
	char	*output;

	i = 0;
	while (src[i] > ' ')
		i++;
	if ((output = malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	i = 0;
	while (src[i] > ' ')
	{
		output[i] = src[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}

int		count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] > ' ')
		{
			count++;
			while (str[i] > ' ')
				i++;
		}
		else
			i++;
	}
	return (count + 1);
}

char	**ft_split_whitespaces(char *str)
{
	char	**output;
	int		i;
	int		j;

	if ((output = malloc(sizeof(char*) * count_words(str))) == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] > ' ')
		{
			if ((output[j] = copy_word(str + i)) == NULL)
				return (NULL);
			while (str[i] > ' ')
				i++;
			j++;
		}
		else
			i++;
	}
	output[j] = 0;
	return (output);
}
