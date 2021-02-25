/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lirobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:11:26 by lirobert          #+#    #+#             */
/*   Updated: 2021/01/30 11:35:14 by lirobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	dest = dst;
	source = src;
	if (dest == source)
		return (dst);
	if (dest < source)
		ft_memcpy(dst, src, len);
	else
	{
		dest = dest + (len - 1);
		source = source + (len - 1);
		while (len--)
			*dest-- = *source--;
	}
	return (dst);
}
