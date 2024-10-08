/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 22:09:28 by jdenis            #+#    #+#             */
/*   Updated: 2023/05/17 17:43:54 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

void	ft_putstr(char *str);

int		ft_printstr(char *str);

int		ft_printnbr(int n);

int		ft_printpercent(void);

int		ft_num_len(unsigned	int num);

char	*ft_uitoa(unsigned int n);

int		ft_print_unsigned(unsigned int n);

int		ft_ptr_len(uintptr_t num);

void	ft_put_ptr(uintptr_t num);

int		ft_print_ptr(unsigned long long ptr);

int		ft_hex_len(unsigned	int num);

void	ft_put_hex(unsigned int num, const char format);

int		ft_print_hex(unsigned int num, const char format);

int		ft_printchar(int c);

int		ft_formats(va_list args, const char format);

int		ft_printf(const char *str, ...);

#endif