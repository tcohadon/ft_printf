/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohadon <tcohadon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:13:31 by tcohadon          #+#    #+#             */
/*   Updated: 2024/11/06 21:59:08 by tcohadon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putstrlen(const char *str);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_printf(const char *str, ...);
int		ft_functionredirect(char c, va_list args);
int		ft_putunsignednbr(unsigned int n);
int		ft_printlowhex(unsigned int n);
int		ft_printuphex(unsigned long int n);
int		ft_printptr(void *ptr);
int		usize_checker(unsigned long int n);

#endif