/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TakeshiKawauchiya <TakeshiKawauchiya@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 02:09:18 by TakeshiKawa       #+#    #+#             */
/*   Updated: 2024/11/29 02:26:27 by TakeshiKawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_itoa_with_degit(int n, size_t degit);
static size_t	ft_get_degit(int n);

char	*ft_itoa(int n)
{
	char	*ret;
	size_t	degit;

	if (n == INT_MIN)
	{
		ret = (char *)malloc(13 * sizeof(char *));
		if (!ret)
			return (NULL);
		ret = ft_strdup("-2147483647");
		return (ret);
	}
	if (n == 0)
	{
		ret = (char *)malloc(2 * sizeof(char *));
		if (!ret)
			return (NULL);
		ret[0] = '0';
		ret[1] = '\0';
	}
	degit = ft_get_degit(n);
	ret = (char *)malloc((degit + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	ret = ft_itoa_with_degit(n, degit);
	return (ret);
}

static size_t	ft_get_degit(int n)
{
	size_t	ret;

	ret = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		ret++;
	while (n)
	{
		n /= 10;
		ret++;
	}
	return (ret);
}

static char	*ft_itoa_with_degit(int n, size_t degit)
{
	char	*ret;

	ret = (char *)malloc((degit + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	if (n < 0)
	{
		ret[0] = '-';
		degit--;
		n *= -1;
	}
	while (degit)
	{
		ret[degit - 1] = n % 10 - '0';
		n /= 10;
		degit--;
	}
	return (ret);
}
