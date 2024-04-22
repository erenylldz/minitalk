/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:43:10 by eryildiz          #+#    #+#             */
/*   Updated: 2024/03/04 20:03:31 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# define BUFFER_SIZE 42

# include <unistd.h>
# include <signal.h>
# include "ft_printf/ft_printf.h"

int		ft_atoi(const char *str);
void	ft_process_bit(int ac, char c);
void	ft_write(int num);

#endif
