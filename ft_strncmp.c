/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:25:23 by mlaffita          #+#    #+#             */
/*   Updated: 2024/10/25 17:44:51 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] != '\0'
		&& (unsigned char)s2[i] != '\0' && i < n - 1)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	chaine1[] = "hello";
	char	chaine2[] = "hell";
	int	number;

	number = 6;
	ft_strncmp(chaine1, chaine2, number);
	printf("%d\n", ft_strncmp(chaine1, chaine2, number));
	printf("%d\n", strncmp(chaine1, chaine2, number));
	return (0);
}
*/