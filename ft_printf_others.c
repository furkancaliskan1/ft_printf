/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_others.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fucalisk <fucalisk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 00:32:58 by fucalisk          #+#    #+#             */
/*   Updated: 2023/12/11 00:32:58 by fucalisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	base(unsigned long long int k, char x)
{
	int	i;
	int	tmp;

	i = 0;
	if (k > 15)
	{
		tmp = base(k / 16, x);
		if (tmp == -1)
			return (-1);
		i += tmp;
	}
	if (k % 16 < 10)
	{
		if (ft_putchar((k % 16) + '0') == -1)
			return (-1);
	}
	else if (ft_putchar((k % 16) + x) == -1)
		return (-1);
	return (++i);
}
