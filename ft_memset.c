/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TakeshiKawauchiya <TakeshiKawauchiya@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:42:47 by TakeshiKawa       #+#    #+#             */
/*   Updated: 2024/11/27 21:46:57 by TakeshiKawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cptr;
	int				i;

	cptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		cptr[i] = c;
		i++;
	}
	return (b);
}
