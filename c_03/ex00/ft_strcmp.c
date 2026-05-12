/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:15:08 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/07 12:06:05 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s, char *s2)
{	
	while (*s && (*s == *s2))
	{
		s++;
		s2++;
	}
	return ((unsigned char)*s - (unsigned char)*s2);
}

// int	main(void)
// {
// 	char str1[] = {"1234A"};
// 	char str2[] = {"1234a"};
// 	printf("%d", ft_strcmp(str1, str2));
// }