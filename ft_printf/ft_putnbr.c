/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:39:02 by eryildiz          #+#    #+#             */
/*   Updated: 2023/11/15 14:04:28 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	int	a;

	a = 0;
	if (num == -2147483648)
	{
		a += ft_putchar('-');
		a += ft_putchar('2');
		a += ft_putnbr(147483648);
	}
	else if (num < 0)
	{
		a += ft_putchar('-');
		num = -num;
		a += ft_putnbr(num);
	}
	else if (num > 9)
	{
		a += ft_putnbr(num / 10);
		a += ft_putnbr(num % 10);
	}
	else
		a += ft_putchar(num + 48);
	return (a);
}

int	ft_putunsigned(unsigned int num)
{
	long	digits[20];
	long	digitsnum;
	long	i;
	long	nbr;

	nbr = 0;
	digitsnum = 0;
	if (num == 0)
		nbr += ft_putchar('0');
	while (num > 0)
	{
		digits[digitsnum] = num % 10;
		num /= 10;
		digitsnum++;
	}
	i = digitsnum - 1;
	while (i >= 0)
	{
		nbr += ft_putchar(digits[i] + '0');
		i--;
	}
	return (nbr);
}

int	ft_percent(char c)
{
	if (c == '%')
		write (1, &c, 1);
	return (c);
}
