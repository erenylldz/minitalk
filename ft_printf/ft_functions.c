/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:24:19 by eryildiz          #+#    #+#             */
/*   Updated: 2023/11/15 14:28:39 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
		str = "(null)";
	while (str[len])
	{
		write (1, &str[len], 1);
		len++;
	}
	return (len);
}

int	ft_putnbruphex(unsigned long num)
{
	int		i;
	int		mod;
	char	*uphex;
	char	hex[100];
	int		number;

	uphex = "0123456789ABCDEF";
	number = 0;
	i = 0;
	if (num == 0)
		number = ft_putchar('0');
	while (num)
	{
		mod = num % 16;
		hex[i++] = uphex[mod];
		num = num / 16;
	}
	while (i > 0)
	{
		number += ft_putchar(hex[--i]);
	}
	return (number);
}

int	ft_putnbrhex(unsigned long num)
{
	int		i;
	int		mod;
	char	*lowhex;
	char	hex[100];
	int		number;

	lowhex = "0123456789abcdef";
	number = 0;
	i = 0;
	if (num == 0)
		number = ft_putchar('0');
	while (num)
	{
		mod = num % 16;
		hex[i++] = lowhex[mod];
		num = num / 16;
	}
	while (i > 0)
	{
		number += ft_putchar(hex[--i]);
	}
	return (number);
}

int	ft_putpointer(unsigned long num)
{
	int	count;

	count = 0;
	if (num == 0)
		count += write(1, "0x0", 3);
	else
	{
		count += ft_putstr ("0x");
		count += ft_putnbrhex(num);
	}
	return (count);
}
