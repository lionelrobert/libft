/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lirobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 09:54:10 by lirobert          #+#    #+#             */
/*   Updated: 2021/02/09 11:22:11 by lirobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	getb(char const *s1, char const *set, unsigned int b, size_t a)
{
	while (set[a] != '\0')
	{
		if (s1[b] == set[a])
		{
			b++;
			a = 0;
		}
		else
			a++;
	}
	return (b);
}

size_t			getlen(char const *s1, char const *set, size_t a, size_t len)
{
	while (set[a] != '\0')
	{
		if (s1[len] == set[a])
		{
			len--;
			a = 0;
		}
		else
			a++;
	}
	return (len);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t			a;
	size_t			len;
	unsigned int	b;

	a = 0;
	b = 0;
	b = getb(s1, set, b, a);
	len = ft_strlen(s1) - 1;
	if (s1[b] == '\0')
		return (ft_calloc(1, 1));
	a = 0;
	len = getlen(s1, set, a, len);
	return (ft_substr(s1, b, len - b + 1));
}
