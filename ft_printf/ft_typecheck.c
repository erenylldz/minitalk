/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typecheck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:55:49 by eryildiz          #+#    #+#             */
/*   Updated: 2023/12/07 19:04:33 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_types(char type, va_list ap)
{
	size_t	print;

	print = 0;
	if (type == 'c')
		print = ft_putchar(va_arg(ap, int));
	else if (type == 's')
		print = ft_putstr(va_arg(ap, char *));
	else if (type == 'p')
		print = ft_putpointer(va_arg(ap, unsigned long));
	else if (type == 'd')
		print = ft_putnbr(va_arg(ap, int));
	else if (type == 'i')
		print = ft_putnbr(va_arg(ap, int));
	else if (type == 'u')
		print = ft_putunsigned(va_arg(ap, unsigned int));
	else if (type == 'x')
		print = ft_putnbrhex(va_arg(ap, unsigned int));
	else if (type == 'X')
		print = ft_putnbruphex(va_arg(ap, unsigned int));
	else if (type == '%')
		print = ft_putchar('%');
	return (print);
}
