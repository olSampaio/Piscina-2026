/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:04:32 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/10 09:42:01 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;	

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	j = 0;
	while (str[j])
	{
		i = 0;
		while (to_find[i] && to_find[i] == str[j + i])
		{
			i++;
		}
		if (!to_find[i])
		{
			return (&str[j]);
		}
		j++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str1[] = "123ab3c1abc23";
// 	char str2[] = "abc";
// 	ft_strstr(str1, str2);
// 	printf("%s", ft_strstr(str1, str2));
// }