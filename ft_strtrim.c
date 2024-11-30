/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TakeshiKawauchiya <TakeshiKawauchiya@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 22:55:06 by TakeshiKawa       #+#    #+#             */
/*   Updated: 2024/11/30 01:36:00 by TakeshiKawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		isincludedinset(const char c, const char *set);
static size_t	calclength(const char *s1, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	ret = (char *)malloc((calclength(s1, set) + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (*s1)
	{
		if (!isincludedinset(*s1, set))
		{
			ret[i] = *s1;
			i++;
		}
		s1++;
	}
	ret[i] = '\0';
	return (ret);
}

static size_t	calclength(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	i = 0;
	while (s1[i])
	{
		if (isincludedinset(s1[i], set))
			len--;
		i++;
	}
	return (len);
}

static int	isincludedinset(const char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
