/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:20:52 by mlaffita          #+#    #+#             */
/*   Updated: 2024/10/23 14:42:32 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n--)
		*str++ = '\0';
}
*/
void	*ft_calloc(size_t count, size_t size)
{
	size_t	b;
	void	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	b = count * size;
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, b);
	return (p);
}
/*
#include <stdio.h>

int main()
{
	int	*tab;
	int n = 10;
	int i = 0;

	tab = (int *) ft_calloc(n, sizeof(int));
	if (tab == NULL)
	{
		printf("Echec allocation memoire");
		return (1);
	}
	while (i < n)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
*/