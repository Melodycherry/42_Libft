/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:26:17 by mlaffita          #+#    #+#             */
/*   Updated: 2024/10/23 16:05:09 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(long nb)
{
	int	len;

	if (nb == 0)
		return (1);
	len = 0;
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		i;

	num = n;
	i = len(num);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[i--] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
/*
#include <stdio.h>

int main ()
{
	printf("Test Itoa 12345 = %s\n", ft_itoa(12345));
	printf("Test Itoa -12345 = %s\n", ft_itoa(-12345));
	printf("Test Itoa 0= %s\n", ft_itoa(0));
	return (0);
}
*/