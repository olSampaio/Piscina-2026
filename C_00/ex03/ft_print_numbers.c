/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 09:34:24 by lusampai          #+#    #+#             */
/*   Updated: 2026/02/28 09:30:21 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	number;	

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}	
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return(0);
// }