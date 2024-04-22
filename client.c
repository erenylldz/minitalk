/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:32:16 by eryildiz          #+#    #+#             */
/*   Updated: 2024/04/01 15:11:29 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "ft_printf/ft_printf.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	negative;

	negative = 1;
	i = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '+' || *str == '-')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		i = i * 10 + (*str - 48);
		++str;
	}
	return (i * negative);
}
//  0111 0001
// 0000 0001
void	ft_process_bit(int pid, char c)
{
	int	x;

	x = 0;
	while (x <= 6)
	{
		if ((c >> x) & 1)
			kill (pid, SIGUSR1);
		else
			kill (pid, SIGUSR2);
		x++;
		usleep(50);
	}
}

int	main(int ac, char **argv)
{
	int	index;
	int	pid;

	index = 0;
	if (ac == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][index])
		{
			ft_process_bit(pid, argv[2][index]);
			index++;
		}
		ft_process_bit(pid, '\n');
	}
	else
	{
		ft_printf("Eksik argüman girdiniz. Lütfen bir değer giriniz!");
		return (0);
	}
	return (0);
}
