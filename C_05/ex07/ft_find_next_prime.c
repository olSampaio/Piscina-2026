/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:54:16 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/16 10:27:38 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if ((nb % i) == 0)
		{			
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	number;

	number = nb;
	while (ft_is_prime(number) == 0)
	{			
		number++;
	}
	return (number);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d", ft_find_next_prime(8));
// }	