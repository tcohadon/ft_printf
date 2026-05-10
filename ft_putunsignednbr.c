/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohadon <tcohadon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:45:03 by tcohadon          #+#    #+#             */
/*   Updated: 2024/11/05 14:38:24 by tcohadon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size_checker(unsigned int n)
{
	int					i;
	unsigned int		check;

	check = n;
	i = 1;
	while (check > (unsigned int)9)
	{
		check = check / 10;
		i++;
	}
	return (i);
}

int	ft_putunsignednbr(unsigned int n)
{
	unsigned int	i;

	i = size_checker(n);
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
	return (i);
}
