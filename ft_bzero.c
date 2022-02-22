/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:07:43 by nnakarac          #+#    #+#             */
/*   Updated: 2022/02/22 16:08:57 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n-- > 0)
		*ptr++ = 0;
}

// int	main(void)
// {
// 	char	str[10] = "+++++++++";
// 	char	*ptr;
// 	int	i;

// 	i = 0;
// 	ptr = str;
// 	ft_bzero(str, 100);
// 	while (i++ < 20)
// 	{
// 		if (*ptr)
// 			printf("%d\t", *ptr);
// 		else
// 			printf("%d\t", ' ');
// 		ptr++;
// 	}
// 	printf("\n");
// }
