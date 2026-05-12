/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:55:05 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/10 09:41:42 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s && (*s == *s2) && n > 1)
	{
		s++;
		s2++;
		n--;
	}
	return ((unsigned char)*s - (unsigned char)*s2);
}

// int	main(void)
// {
// 	char str1[] = {"1234a"};
// 	char str2[] = {"1234A"};
// 	printf("%d\n", ft_strncmp("abc", "abd", 0));
// 	printf("%d", strncmp("abc", "abd", 0));
// }