/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:09:58 by hidsaid           #+#    #+#             */
/*   Updated: 2024/10/28 10:54:36 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1p;
	const unsigned char	*s2p;
	size_t				i;

	s1p = s1;
	s2p = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && s1p[i] == s2p[i])
	{
		i++;
	}
	return (s1p[i] - s2p[i]);
}
/*int main()
{
	char s1[100] = "HaFsa";
	char s2[100] = "Hafsa";
	printf("%d", ft_memcmp(s1, s2, 3));
	return 0;
}*/