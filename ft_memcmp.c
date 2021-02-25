/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lirobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 12:54:58 by lirobert          #+#    #+#             */
/*   Updated: 2021/02/10 15:56:46 by lirobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char			*ss1;
	const unsigned char			*ss2;
	size_t						a;

	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	a = 0;
	if (n == 0)
		return (0);
	while (ss1[a] == ss2[a] && (a < n - 1))
		a++;
	return (ss1[a] - ss2[a]);
}
