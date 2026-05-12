/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:07:10 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/03 14:52:20 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	situation;
	int	i;

	i = 0;
	situation = 1;
	while (str[i])
	{		
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			situation = 0;
		}
		i++;
	}
	if (i == 0)
		situation = 1;
	return (situation);
}

// int	main(void)
// {
// 	char str[] = {"ASDSAFaAS"};
// 	printf("%d", ft_str_is_uppercase(str));
// }