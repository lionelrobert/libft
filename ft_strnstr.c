/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lirobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:20:34 by lirobert          #+#    #+#             */
/*   Updated: 2021/02/09 16:09:31 by lirobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t a;
	size_t b;

	a = 0;
	b = 0;
	if (needle[a] == '\0')
		return ((char *)haystack);
	while (b < len && haystack[b] != '\0')
	{
		while (needle[a] != '\0' && haystack[b] != '\0'
				&& needle[a] == haystack[b] && b < len)
		{
			b++;
			a++;
			if ((needle[a] == '\0') ||
					(needle[a] == '\0' && haystack[b] == '\0'))
				return ((char *)&haystack[b - a]);
			else if (haystack[b] == '\0')
				return (0);
			else if (haystack[b] != needle[a])
				a = 0;
		}
		b++;
	}
	return (0);
}
