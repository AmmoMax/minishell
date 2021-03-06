/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 17:12:14 by iadrien           #+#    #+#             */
/*   Updated: 2020/07/15 16:31:20 by iadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_isspace(int ch)
{
	if (ch == '\t' || ch == '\n' || ch == '\v'\
	|| ch == '\f' || ch == '\r' || ch == ' ')
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	long		num;
	int			minus;

	minus = 1;
	num = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' && ft_isdigit(str[1]))
		minus = -1;
	if ((*str == '+' && ft_isdigit(str[1])) ||\
	(*str == '-' && ft_isdigit(str[1])))
		str++;
	while (ft_isdigit(*str))
	{
		if (num > LONG_MAX / 10)
			return (minus == -1 ? 0 : -1);
		num = num * 10 + *str - 0x30;
		str++;
	}
	return ((int)(num * minus));
}
