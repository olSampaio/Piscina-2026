/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 13:55:35 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/03 14:53:05 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	situation;
	int	i;

	i = 0;
	situation = 1;
	while (str[i])
	{		
		if (!(str[i] >= '0' && str[i] <= '9'))
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
// 	char str[] = {"3213124"};
// 	printf("%d", ft_str_is_numeric(str));
// }