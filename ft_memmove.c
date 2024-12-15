/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:05:14 by hidsaid           #+#    #+#             */
/*   Updated: 2024/10/28 11:16:09 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destp;
	const unsigned char	*srcp;
	int					i;

	destp = (unsigned char *)dest;
	srcp = (unsigned char *)src;
	i = 0;
	if (dest <= src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			destp[i] = srcp[i];
			if (i == 0)
				break ;
			i--;
		}
	}
	return (dest);
}
/*int	main(void)
{
	int		arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	ft_memmove(arr + 2, arr, 8 * sizeof(int));
	printf("%d %d %d %d %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3],
			arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
	char    str[] = "ABCDEFG";
	ft_memmove(str + 3, str, 4);
	printf("\n%s", str);
	char str2[100] = "Learningisfun";
	char *first, *second;
	first = str2;
	second = str2;
	printf("\nOriginal string : %s\n ", str2);
	ft_memmove(first + 8, first, 10);
	printf("memcpy overlap : %s\n ", str2);
	ft_memmove(second + 8, first, 10);
	printf("memmove overlap : %s\n ", str2);
	return (0);
}*/
