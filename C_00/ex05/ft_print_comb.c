/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 10:09:05 by lusampai          #+#    #+#             */
/*   Updated: 2026/02/28 09:32:13 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_space(void)
{
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_putchar(char c, char d, char u)
{
	c = c + '0';
	d = d + '0';
	u = u + '0';
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (!(c == '7' && d == '8' && u == '9'))
	{
		ft_space();
	}
	else
	{
		write(1, "\n", 1);
	}
}

void	ft_print_comb(void)
{
	char	centena;
	char	dezena;
	char	unidade;

	centena = 0;
	while (centena <= 7)
	{
		dezena = centena + 1;
		while (dezena <= 8)
		{
			unidade = dezena + 1;
			while (unidade <= 9)
			{
				ft_putchar(centena, dezena, unidade);
				unidade++;
			}
			dezena++;
		}
		centena++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// }
