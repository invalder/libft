/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:01:34 by nnakarac          #+#    #+#             */
/*   Updated: 2022/02/22 16:10:44 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*ps1;
	char	*ps2;

	ps1 = (char *)s1;
	ps2 = (char *)s2;
	while (n > 0 && (*ps1 && *ps2))
	{
		if (*ps1++ != *ps2++)
			return ((unsigned char)*(--ps1) - (unsigned char)*(--ps2));
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*ps1 - (unsigned char)*ps2);
}
/*
int	main(void)
{
	char str1[10] = "test\200";
	char str2[10] = "test\0";
	// char str3[30] = "Helloabas,haklsjddsal";

	printf("strncmp: %d\n", strncmp(str1, str2, (size_t) 8));
	// printf("strncmp: %d\n", strncmp(str1, str3, (size_t) 8));

	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, (size_t) 8));
	// printf("ft_strncmp: %d\n", ft_strncmp(str1, str3, (size_t) 8));
	return (0);
}
*/
