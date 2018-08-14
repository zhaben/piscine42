/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <zbennett@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 22:54:30 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/26 22:58:23 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		cpos(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*copy_word(char *src, char *charset)
{
	int		i;
	char	*output;

	i = 0;
	while (cpos(src[i], charset) == -1)
	{
		i++;
	}
	if ((output = malloc(sizeof(char) * (i + 1))) == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (cpos(src[i], charset) == -1)
	{
		output[i] = src[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}

int		count_words(char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (cpos(str[i], charset) == -1)
		{
			count++;
			while (cpos(str[i], charset) == -1)
			{
				i++;
			}
		}
		else
			i++;
	}
	return (count + 1);
}

char	**ft_split(char *str, char *charset)
{
	char	**output;
	int		i;
	int		j;

	if ((output = malloc(sizeof(char*) * count_words(str, charset))) == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (str[i])
	{
		if (cpos(str[i], charset) == -1)
		{
			if ((output[j] = copy_word(str + i, charset)) == NULL)
			{
				return (NULL);
			}
			while (cpos(str[i], charset) == -1)
				i++;
			j++;
		}
		else
			i++;
	}
	output[j] = 0;
	return (output);
}
