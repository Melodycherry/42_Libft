/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:07:37 by mlaffita          #+#    #+#             */
/*   Updated: 2024/10/16 15:20:35 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char) c)
			return ((char *) str);
		str++;
	}
	if (c == '\0')
		return ((char *) str);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char	str[] = "Hello world";

	char *result = ft_strchr(str, 'l');
	printf(" caractere trouve a la position %ld\n", result - str);
	//
	char *resultat = strchr(str, 'l');
	printf(" caractere trouve a la position %ld\n", resultat - str);
	return (0);
}
*/