/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:34:40 by eryildiz          #+#    #+#             */
/*   Updated: 2023/12/07 19:11:37 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			count += ft_types(*(str + 1), ap);
			str++;
		}
		else
			count += write(1, str, 1);
		str++;
	}
	va_end(ap);
	return (count);
}
