/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:48:10 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/17 15:52:13 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 0)
		return (1);
	i = 0;
	while (argv[0][i] != 0)
	{
		write (1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
