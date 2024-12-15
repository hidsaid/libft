/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:16:45 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/06 00:32:01 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	destlen;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	destlen = ft_strlen(dst);
	if (dstsize <= destlen)
		return (ft_strlen(src) + dstsize);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && j < (dstsize - destlen - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + destlen);
}
/*int main()
{
	char dst[20] = "Welcome ";
	printf("%ld",ft_strlcat(dst,"to 1337",9));
	printf("%s",dst);
	return 0;
}*/
