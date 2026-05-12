/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 17:45:20 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/01 15:36:50 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	final;
	int	comeco;

	comeco = 0;
	temp = 0;
	final = size - 1;
	while (comeco < final)
	{
		temp = tab[final];
		tab[final] = tab[comeco];
		tab[comeco] = temp;
		comeco++;
		final--;
	}
}

// int	main()
// {
// 	int array[5] = {1, 2, 3, 4, 5};	
// 	ft_rev_int_tab(array, 5);	
// 	printf("%d", array[0]);
// }