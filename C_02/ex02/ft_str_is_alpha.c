/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 13:36:03 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/05 10:08:47 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	situation;
	int	i;

	i = 0;
	situation = 1;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str
					[i] >= 'a' && str[i] <= 'z')))
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
// 	char str[] = {"das3d"};
// 	printf("%d", ft_str_is_alpha(str));
// }