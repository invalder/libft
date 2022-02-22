/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:46:33 by nnakarac          #+#    #+#             */
/*   Updated: 2022/02/22 16:09:50 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	unsigned char	chr;

	ptr_s = (unsigned char *)s;
	chr = (unsigned char)c;
	while (n-- > 0)
	{
		if (*ptr_s == chr)
			return (ptr_s);
		ptr_s++;
	}
	return (NULL);
}

/*
int main(void)
{
	char	str1[11] = "0123456789";
	char	str2[11] = "!!!!!!!!!!";

	printf("%p\n", ft_memchr(str1, '0', 5));
	printf("%p\n", ft_memchr(str1, 'a', 10));
	printf("%p\n", ft_memchr(str2, '!', 5));
}
*/
