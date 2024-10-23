/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:21:23 by mlaffita          #+#    #+#             */
/*   Updated: 2024/10/17 16:34:24 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
int main()
{
	char	source[] = "hello world!";
	char	destination[20];
	size_t	n;

	n = 14;
	ft_memcpy(destination, source, n);
	printf("source %s\n", source);
	printf("destination %s\n", destination);
	//
	memcpy(destination, source, n);
	printf("source %s\n", source);
	printf("destination %s\n", destination);
	return (0);
}
*/