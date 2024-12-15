/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:40:03 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/05 19:13:59 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*sp;
	size_t				i;

	i = 0;
	sp = s;
	while (i < n)
	{
		if (sp[i] == (unsigned char)c)
			return ((void *)(sp + i));
		i++;
	}
	return (NULL);
}
/*int main()
{
	int str[] = {1100,2,3,4};
	int *pos = ft_memchr(str, 1612, 2);
	//printf("pos[0] = %c\n",pos[0]);
	printf("pos[1] = %d\n",pos ? 1:0);
	return (0);
}*/