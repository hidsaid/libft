/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:50:46 by hidsaid           #+#    #+#             */
/*   Updated: 2024/10/27 20:43:18 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*int main()
{
	char src[20] = "Hello";
	int arr[20] = {5,67,89,193};
	ft_bzero(src, 3);
	printf("%s\n",src);
	ft_bzero(arr, 3 * sizeof(int));
	printf("%d %d %d %d",arr[0],arr[1],arr[2],arr[3]);
	return 0;
}*/
