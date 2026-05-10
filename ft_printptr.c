/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohadon <tcohadon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:19:29 by tcohadon          #+#    #+#             */
/*   Updated: 2024/11/06 14:45:13 by tcohadon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size_checker(unsigned long int n)
{
	int					i;

	i = 1;
	while (n >= 16)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static void	ft_printhexptr(unsigned long long ptr)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (ptr >= 16)
		ft_printhexptr(ptr / 16);
	write(1, &hex[ptr % 16], 1);
}

int	ft_printptr(void *ptr)
{
	unsigned long long	adress;
	int					total;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	adress = (unsigned long long)ptr;
	total = size_checker(adress) + 2;
	write(1, "0x", 2);
	ft_printhexptr(adress);
	return (total);
}
