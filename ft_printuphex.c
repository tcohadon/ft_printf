/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuphex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohadon <tcohadon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:13:35 by tcohadon          #+#    #+#             */
/*   Updated: 2024/11/06 19:19:47 by tcohadon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printuphex(unsigned long int n)
{
	char	*hex;
	int		i;

	i = usize_checker(n);
	hex = "0123456789ABCDEF";
	if (n >= 16)
		ft_printuphex(n / 16);
	write(1, &hex[n % 16], 1);
	return (i);
}
