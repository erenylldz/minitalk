/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:40:29 by eryildiz          #+#    #+#             */
/*   Updated: 2024/04/01 15:11:27 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "ft_printf/ft_printf.h"

void	ft_write(int num)
{
	static int	i;
	static int	bit;
	int			j;

	j = 1;
	if (num == SIGUSR1)
	{
		j <<= i;
		bit |= j;
	}
	i++;
	if (i == 7)
	{
		write(1, &bit, 1);
		bit = 0;
		i = 0;
	}
}

int	main(void)
{
	ft_printf("Pid : %d\n", getpid());
	signal(SIGUSR1, ft_write);
	signal(SIGUSR2, ft_write);
	while (1)
		pause();
}

// 0111 0001 | 0011 1000 | 0001 1100 | 0000 1110 | 0000 0111 | 0000 0011 | 0000 0001 | 0000 0000
// 0000 0001 |
// i 2
