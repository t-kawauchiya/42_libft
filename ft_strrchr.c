/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TakeshiKawauchiya <TakeshiKawauchiya@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:04:40 by TakeshiKawa       #+#    #+#             */
/*   Updated: 2024/11/28 00:35:40 by TakeshiKawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*cptr;

	cptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			cptr = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (cptr);
}
