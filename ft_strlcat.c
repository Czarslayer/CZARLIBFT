/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:31:37 by mabahani          #+#    #+#             */
/*   Updated: 2022/10/25 16:51:32 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	k;

	dstlen = 0;
	srclen = 0;
	k = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (dstsize == 0 && !dst)
		return (srclen);
	while (dst[dstlen] != '\0')
		dstlen++;
	if (dstsize <= dstlen || dstsize == 0)
		return (srclen + dstsize);
	while (k < dstsize - dstlen - 1 && src[k] != '\0')
	{
		dst[dstlen + k] = src[k];
		k++;
	}
	dst[dstlen + k] = '\0';
	return (dstlen + srclen);
}
