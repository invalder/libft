/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:29:22 by nnakarac          #+#    #+#             */
/*   Updated: 2022/02/22 16:09:57 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*ptr_s1++ != *ptr_s2++)
		{
			return (*(ptr_s1 - 1) - *(ptr_s2 - 1));
		}
		n--;
	}
	return (0);
}

/*
int main(void)
{
	char str1[12] = "Hello World";
	char str2[12] = "Hello New";
	char str3[12] = "Hello Old";

	printf("%d\n", memcmp(str1, str2, (size_t) 11));
	printf("%d\n", ft_memcmp(str1, str2, (size_t) 11));

	return (0);
}
*/
