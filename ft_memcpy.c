/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:23:18 by nnakarac          #+#    #+#             */
/*   Updated: 2022/02/22 16:10:01 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Note:
	- to check if n > size of src or dest should be considered or not
*/

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_d;
	const unsigned char	*ptr_s;

	ptr_d = dest;
	ptr_s = src;
	if (dest == NULL || src == NULL)
	{
		if (dest == NULL)
			return (NULL);
		return (dest);
	}
	if (n)
		while (n-- > 0)
			*ptr_d++ = *ptr_s++;
	return (dest);
}

/*
int	main(void)
{
	char	str1[11] = "0123456789";
	char	str2[11] = "!!!!!!!!!!";

	ft_memcpy(str2 + 5, str1, 5);
	printf("%s\n", str2);
}
*/
