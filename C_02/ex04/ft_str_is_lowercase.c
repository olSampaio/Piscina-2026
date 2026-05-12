/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:02:12 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/03 14:52:46 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	situation;
	int	i;

	i = 0;
	situation = 1;
	while (str[i])
	{		
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
// 	char str[] = {"dsadasfas"};
// 	printf("%d", ft_str_is_lowercase(str));
// }