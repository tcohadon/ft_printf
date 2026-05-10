/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohadon <tcohadon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:29:13 by tcohadon          #+#    #+#             */
/*   Updated: 2024/11/05 14:34:56 by tcohadon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size_checker(int n)
{
	int		i;
	int		check;

	check = n;
	i = 1;
	if (n < 0)
		i++;
	while (check > 9 || check < -9)
	{
		check = check / 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int	i;

	i = size_checker(n);
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
	return (i);
}
