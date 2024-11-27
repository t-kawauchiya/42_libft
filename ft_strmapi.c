/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TakeshiKawauchiya <TakeshiKawauchiya@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:03:09 by TakeshiKawa       #+#    #+#             */
/*   Updated: 2024/11/27 21:32:50 by TakeshiKawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		i;

	if (!s || !f)
		return (NULL);
	ret = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	i = 0;
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

// char	incliment(unsigned int i, char c)
// {
// 	return (c + i);
// }

// int	main(void)
// {
// 	const char	*s = "123";

// 	printf("%s", ft_strmapi(s, incliment));
// }
