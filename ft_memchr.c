/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lirobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:02:40 by lirobert          #+#    #+#             */
/*   Updated: 2021/01/30 13:34:11 by lirobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*source;
	void				*sr;
	size_t				a;

	source = (const unsigned char *)s;
	sr = (void *)s;
	a = 0;
	while (n-- > 0)
	{
		if (*source == (unsigned char)c)
			return (sr + a);
		source++;
		a++;
	}
	return (NULL);
}
