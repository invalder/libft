/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:27:58 by nnakarac          #+#    #+#             */
/*   Updated: 2022/02/22 16:11:04 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

/*
Params:
s: The string from which to create the substring.
start: The start index of the substring in the
string ’s’.
len: The maximum length of the substring.

Ret:
The substring.
NULL if the allocation fails.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	m_len;

	s_len = (unsigned int)ft_strlen(s);
	if ((start + len) > s_len && (start + 1) <= s_len)
		m_len = s_len - start;
	else if ((start + 1) > s_len)
		m_len = 0;
	else
		m_len = len;
	substr = (char *)malloc(sizeof(char) * (m_len + 1));
	if (!substr)
		return (NULL);
	if (m_len != 0)
		m_len = ft_strlcpy(substr, &s[start], (m_len + 1));
	else
		*substr = '\0';
	return (substr);
}
