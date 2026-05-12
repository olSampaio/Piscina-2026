/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 12:45:09 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/16 10:08:23 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char		letter;
	long long	number;

	number = nb;
	if (number < 0)
	{
		number *= -1;
		write(1, "-", 1);
	}
	if (number > 9)
	{
		ft_putnbr(number / 10);
	}
	letter = (number % 10) + '0';
	write(1, &letter, 1);
}

// int	main(void)
// {
// 	ft_putnbr(24121);
// }
