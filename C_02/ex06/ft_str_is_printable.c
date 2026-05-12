/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:09:09 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/05 10:07:19 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	situation;
	int	i;

	i = 0;
	situation = 1;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
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
// 	char str[] = {"dsafsa\n"};
// 	printf("%d", ft_str_is_printable(str));
// }