/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 15:15:58 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/01 17:46:59 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
	*div = a / b;
	*mod = a % b;
}

// int	main()
// {
// 	int div;
// 	int mod;
// 	ft_div_mod(30, 17, &div, &mod);
// 	printf("%d   %d", div, mod);
// }