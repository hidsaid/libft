/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:42:24 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/09 10:16:08 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destp;
	const unsigned char	*srcp;
	size_t				i;

	if (!dest && !src)
		return (dest);
	destp = dest;
	srcp = src;
	i = 0;
	while (i < n)
	{
		destp[i] = srcp[i];
		i++;
	}
	return (dest);
}
/*int main()
{
	char dest[] = "abc";
	char src[] = "abc";
	ft_memcpy(dest,src,3);
	//memcpy(dest,src, 3);
	printf("%s",dest);
	return 0;
}*/
