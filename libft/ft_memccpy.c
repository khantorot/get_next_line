/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glychest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 20:11:25 by glychest          #+#    #+#             */
/*   Updated: 2019/09/15 04:16:50 by glychest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	unsigned char		sb;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	sb = (unsigned char)c;
	while (n--)
	{
		*d++ = *s++;
		if (*(d - 1) == sb)
			return (d);
	}
	return (NULL);
}
