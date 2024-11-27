/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takwauc <takawauc@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:04:51 by takwauc           #+#    #+#             */
/*   Updated: 2024/11/22 02:01:48 by takwauc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

// #include <stdio.h>
// int main(void) {
//   if (ft_isalpha('a')) {
//     printf("a is alphabet");
//   }
//   if (ft_isalpha('?')) {
//     printf("? is alphabet");
//   } else {
//     printf("? is not alphabet");
//   }
// }
