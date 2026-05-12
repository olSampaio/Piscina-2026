/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:23:30 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/16 17:11:40 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;	

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb	)
	{
		if ((nb % i) == 0)
		{			
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int main (void)
// {
// 	printf("%d", ft_is_prime(7));
// }