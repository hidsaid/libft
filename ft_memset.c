/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:37:33 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/02 11:10:19 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*int main()
{
	char s[5] = "Hafsa";
	ft_memset(s, '#', 9);
	printf("%s\n",s);

	//int arr[20] = {1,273,82,29};
	//ft_memset(arr, 0, 2 * sizeof(int));
	//printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
	//return 0;
}*/
