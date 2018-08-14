/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <zbennett@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 23:04:10 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/22 23:10:35 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char **str);
int		ft_parse_summand(char **str);

int		ft_parse_atom(char **str)
{
	int		nb1;

	while (**str == ' ' || **str == '\t')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		nb1 = ft_parse_summand(str);
		if (**str == ')')
			(*str)++;
		return (nb1);
	}
	return (ft_atoi(str));
}

int		ft_parse_factor(char **str)
{
	int		nb1;
	int		nb2;
	char	opr;

	nb1 = ft_parse_atom(str);
	while (**str)
	{
		while (**str == ' ' || **str == '\t')
			(*str)++;
		opr = **str;
		if (opr != '*' && opr != '/' && opr != '%')
			return (nb1);
		(*str)++;
		nb2 = ft_parse_atom(str);
		if (opr == '*')
			nb1 = nb1 * nb2;
		else if (opr == '/')
			nb1 = nb1 / nb2;
		else if (opr == '%')
			nb1 = nb1 % nb2;
	}
	return (nb1);
}

int		ft_parse_summand(char **str)
{
	int		nb1;
	int		nb2;
	char	opr;

	nb1 = ft_parse_factor(str);
	while (**str)
	{
		while (**str == ' ' || **str == '\t')
			(*str)++;
		opr = **str;
		if (opr != '+' && opr != '-')
			return (nb1);
		(*str)++;
		nb2 = ft_parse_factor(str);
		if (opr == '+')
			nb1 = nb1 + nb2;
		else if (opr == '-')
			nb1 = nb1 - nb2;
	}
	return (nb1);
}

int		eval_expr(char *str)
{
	return (ft_parse_summand(&str));
}
