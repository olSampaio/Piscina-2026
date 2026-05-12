/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 11:17:27 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/12 12:16:59 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{		
	int	i;
	int	temp;
	int	j;

	i = 0;
	j = 0;
	temp = 0;
	while (i < size)
	{		
		j = 0;
		while (j < (size - 1 - i))
		{							
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

// int main()
// {
// 	int array[5] = {70, 84, 72, 90, 65};
// 	ft_sort_int_tab(array, 5);
// 	printf("%d ", array[0]);
// 	printf("%d ", array[1]);
// 	printf("%d ", array[2]);
// 	printf("%d ", array[3]);
// 	printf("%d ", array[4]);	
// }