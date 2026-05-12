/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 16:08:41 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/01 15:22:57 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = (*a) / (*b);
	*b = (temp) % (*b);
}

// int	main()
// {
// 	int div;
// 	int mod;
// 	div = 40;
// 	mod = 25;
// 	ft_ultimate_div_mod(&div, &mod);
// 	printf("%d  %d", div, mod);
// }