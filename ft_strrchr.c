/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:42:12 by mlaffita          #+#    #+#             */
/*   Updated: 2024/10/23 14:44:51 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last = 0;

	while (*str != '\0')
	{
		if (*str == (char)c)
			last = str;
		str++;
	}
	if (c == '\0')
		return ((char *) str);
	return ((char *) last);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	const char str[] = "hello world";
	char *result = ft_strrchr(str, 'l');
	printf("caractere trouve a la position %ld\n", result - str);
	//
	char *resultat = strrchr(str, 'l');
	printf("caractere trouve a la position %ld\n", resultat - str);
	return (0);
}
*/