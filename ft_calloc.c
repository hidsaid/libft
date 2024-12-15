/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:45:23 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/04 22:48:13 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbelm, size_t size)
{
	void	*p;

	p = malloc(nbelm * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nbelm * size);
	return (p);
}
/*int main()
{
	int *arr = ft_calloc(5, sizeof(int));
	int i = 0;
	while (i < 5)
	{
		printf("%d ",arr[i]);
		i++;
	}
	return 0;
}*/
