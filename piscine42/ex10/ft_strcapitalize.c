/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <zbennett@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 01:46:53 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/20 00:37:57 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha_num(char c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91) || (c > 47 && c < 58))
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i];
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ((str[i] - ('A' - 'a')));
		i++;
	}
	return (str);
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i];
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ((str[i] - ('a' - 'A')));
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 96 && str[i] < 123) || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((is_alpha_num(str[i - 1])) == 0)
				str[i] = *((ft_strupcase(&str[i])));
			if ((is_alpha_num(str[i - 1])) == 1)
				str[i] = *((ft_strlowcase(&str[i])));
		}
		i++;
	}
	return (str);
}
