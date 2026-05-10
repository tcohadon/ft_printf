/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlowhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohadon <tcohadon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:27:39 by tcohadon          #+#    #+#             */
/*   Updated: 2024/11/06 19:19:42 by tcohadon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	usize_checker(unsigned long int n)
{
	int	i;

	i = 1;
	while (n >= 16)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_printlowhex(unsigned int n)
{
	char	*hex;
	int		i;

	i = usize_checker(n);
	hex = "0123456789abcdef";
	if (n >= 16)
		ft_printlowhex(n / 16);
	write(1, &hex[n % 16], 1);
	return (i);
}
