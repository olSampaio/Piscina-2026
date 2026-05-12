/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:21:55 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/05 12:46:12 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (!(str[0] >= 'A' && str[0] <= 'Z') && (str[0] >= 'a' && str[0] <= 'z'))
		str[0] = str[0] - 32;
	while (str[i])
	{
		if (i > 0)
		{
			if (!(str[i - 1] >= 'A' && str[i] >= 'Z')
				&& !(str[i - 1] >= 'a' && str[i -1] <= 'z')
				&& !(str[i - 1] >= '0' && str[i - 1] <= '9')
				&& (str[i] >= 'a' && str[i] <= 'z'))
						str[i] = str[i] - 32;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = {"OI tUDO,bem? 45bem; com+você"};
// 	ft_str_capitalize(str);
// 	printf("%s", str);
// }
