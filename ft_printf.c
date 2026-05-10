/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohadon <tcohadon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:24:44 by tcohadon          #+#    #+#             */
/*   Updated: 2024/11/06 21:56:52 by tcohadon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_functionredirect(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstrlen(va_arg(args, char *)));
	if (c == 'd')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'u')
		return (ft_putunsignednbr(va_arg(args, unsigned int)));
	if (c == '%')
		return (ft_putchar('%'));
	if (c == 'x')
		return (ft_printlowhex(va_arg(args, unsigned int)));
	if (c == 'X')
		return (ft_printuphex(va_arg(args, unsigned int)));
	if (c == 'p')
		return (ft_printptr(va_arg(args, void *)));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '\0')
				return (-1);
			count += ft_functionredirect(*str, args);
		}
		else
		{
			write(1, &*str, 1);
			count++;
		}
		str++;
	}
	return (va_end(args), count);
}
