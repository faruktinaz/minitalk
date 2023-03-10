/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:09:51 by ogenc             #+#    #+#             */
/*   Updated: 2023/03/07 20:53:53 by ogenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"minitalk.h"

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		num *= 10;
		num += str[i] - 48;
		i++;
	}
	return (num);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr(int nb)
{
	char	result;

	if (nb >= 0 && nb <= 9)
	{
		result = nb + 48;
		write (1, &result, 1);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		result = (nb % 10) + 48;
		write (1, &result, 1);
	}
}

char	*itoa_pid(int nb)
{
	int		i;
	int		x;
	char	*str;

	i = 0;
	x = nb;
	while (x)
	{
		x /= 10;
		i++;
	}
	str = malloc(i + 2);
	str[i + 1] = '\0';
	str[i] = 27;
	while (--i >= 0)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}

char	*convertbinary(unsigned char a)
{
	int		i;
	char	*binary;

	i = 7;
	binary = malloc(8 + 1);
	while (i >= 0)
	{
		binary[i] = (a % 2) + '0';
		a = a / 2;
		i--;
	}
	binary[8] = 0;
	return (binary);
}
