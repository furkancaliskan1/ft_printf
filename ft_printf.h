/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fucalisk <fucalisk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 00:33:30 by fucalisk          #+#    #+#             */
/*   Updated: 2023/12/11 00:33:30 by fucalisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int nb);
int	ft_putnbr_unsigned(unsigned int nb);
int	base(unsigned long long int k, char x);
int	ft_strlen(const char *s);
int	ft_printf(const char *s, ...);

#endif
