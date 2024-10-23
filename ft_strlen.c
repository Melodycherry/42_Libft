/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:21:12 by mlaffita          #+#    #+#             */
/*   Updated: 2024/10/10 16:21:33 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}
/*
#include <stdio.h>

int main()
{
    char testchaine[] = "coucou";
    
    ft_strlen(testchaine);
    printf("%d", ft_strlen(testchaine));
    return  (0);
}
*/