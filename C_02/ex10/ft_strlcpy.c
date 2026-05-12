/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:31:05 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/05 10:15:39 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	contador_src(char *src)
{
	int	contador;

	contador = 0;
	while (src[contador])
	{
		contador++;
	}
	return (contador);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size <= 0)
		return (contador_src(src));
	while (i < size -1 && src[i])
	{				
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (contador_src(src));
}

// int	main(void)
// {
// 	char string1[50] = {""};
// 	char string2[12] = {"Eu sou Lucas"};
// 	printf("%d", ft_strlcpy(string1, string2, 0));
// }
