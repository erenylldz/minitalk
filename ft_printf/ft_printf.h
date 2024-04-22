/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:11:09 by eryildiz          #+#    #+#             */
/*   Updated: 2023/11/15 14:09:41 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbrhex(unsigned long num);
int		ft_putnbruphex(unsigned long num);
int		ft_putpointer(unsigned long num);
int		ft_putnbr(int num);
int		ft_putunsigned(unsigned int num);
int		ft_percent(char c);
int		ft_types(char type, va_list list);
int		ft_typecheck(char c);
int		ft_printf(const char *str, ...);
#endif
