/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:25:17 by nnakarac          #+#    #+#             */
/*   Updated: 2022/02/22 18:10:02 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/*
	n Applies the function ’f’ on each character of
	the string passed as argument, passing its index
	as first argument. Each character is passed by
	address to ’f’ to be modified if necessary.

*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char	*ps;
	int		len;

	ps = s;
	len = 0;
	if (!*ps)
		f(len, ps);
	while (*ps)
	{
		f(len++, ps++);
	}
}
