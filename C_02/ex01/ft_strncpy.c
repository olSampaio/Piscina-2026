/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 11:34:43 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/05 10:14:34 by lusampai         ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int	i;
	unsigned int	contador;

	i = 0;
	contador = contador_src(src);
	while (i < n)
	{
		if (i < contador)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {	
// 	char string1[50] = {""};
// 	char string2[13] = {"Eu sou Lucas"};		
// 	printf("%s", ft_strncpy(string1, string2, 16));
// }