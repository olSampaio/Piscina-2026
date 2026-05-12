/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusampai <lusampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 11:45:24 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/18 15:05:23 by lusampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	int i;

	i = 0;
	while(base[i])	
		i++;
	return (i);
}

int verification(int len, char *base)
{
	int begin;	
	int i;

	begin = 0;
	if (len < 2)
		return (0);
	while (len > begin)
	{
		i = begin + 1;		
		while (base[i])
		{			
			if (base[begin] == base[i] || (base[i] == '+' || base[i] == '-'))
				return (0);
			i++;
		}
		begin++;
	}
	return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
	int len;

	len = ft_strlen(base);
	if (verification(len, base) == 1)
	{			
		if(nbr > len)	
			ft_putnbr_base(nbr / len, base);					
		write(1, &base[nbr % len], 1);					
	}
}

int	main(void)
{
	ft_putnbr_base(1629345, "0123456789");
}