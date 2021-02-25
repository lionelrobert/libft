/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lirobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:13:01 by lirobert          #+#    #+#             */
/*   Updated: 2021/02/09 14:24:14 by lirobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t k;
	size_t len;

	i = 0;
	j = 0;
	k = dstsize;
	len = ft_strlen(src);
	while (dst[i] != '\0' && k > 0)
	{
		i++;
		len++;
		k--;
	}
	while (src[j] != '\0' && k > 1)
	{
		dst[i] = src[j];
		i++;
		j++;
		k--;
	}
	if (k >= 1)
		dst[i] = '\0';
	return (len);
}
