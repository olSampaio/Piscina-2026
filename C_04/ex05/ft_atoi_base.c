/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 15:03:43 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/18 15:54:47 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *base)
{
	int i;

	i = 0;
	while(base[i])	
		i++;
	return (i);
}

int verification(char *base, int len)
{
	int	i;
	int begin;

	i = 0;
	while(base[i])
	{
		i = begin + 1;		
		while (i < begin)
		{
			if (base[begin] == base[i] || base[i] == '+' || base[i] == '-')
				return (0);				
			i++;
		}
		begin++;
	}
	return (1);
}

int get_value (char c, char *base)
{	
	int i;

	i = 0;
	while(base[i])
	{
		if (base[i] == c)		
			return(i);
		i++;
	}
	return (0);
}

int ft_atoi_base(char *str, char *base)
{
	int i;
	int result;
	int len;
	int signal;

	i = 0;
	signal = 1;
	result = 0;
	len = ft_strlen(base);
	if (verification(base, len) == 1)
	{			
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
			signal *= -1;
			i++;
		}
		while(str[i])
		{			
			result = (result * len) + get_value(str[i], base);			
			i++;
		}
		return (result * signal);
	}
	else
		return (0);
}

int	main(void)
{
	char str[] = "2A";
	printf("%d", ft_atoi_base(str, "0123456789ABCDEF"));
}