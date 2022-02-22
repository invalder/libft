/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:21:11 by nnakarac          #+#    #+#             */
/*   Updated: 2022/02/22 16:10:32 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Appends src to string dst of size siz (unlike strncat, siz is the
 * full size of dst, not space left).  At most siz-1 characters
 * will be copied.  Always NUL terminates (unless siz <= strlen(dst)).
 * Returns strlen(initial dst) + strlen(src); if retval >= siz,
 * truncation occurred.
 */

size_t	ft_strlcat(char *dest, const char *src, size_t size);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	const char	*p_src;
	char		*p_dest;
	size_t		n;
	size_t		dlen;

	p_src = src;
	p_dest = dest;
	n = size;
	while (n-- && *p_dest)
		p_dest++;
	dlen = p_dest - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(p_src));
	while (*p_src)
	{
		if (n != 1)
		{
			*p_dest++ = *p_src;
			n--;
		}
		p_src++;
	}
	*p_dest = '\0';
	return (dlen + (p_src - src));
}
