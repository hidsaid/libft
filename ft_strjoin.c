/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:37:05 by hidsaid           #+#    #+#             */
/*   Updated: 2024/10/27 21:12:34 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str_join;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str_join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)
				+ 1));
	if (str_join == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str_join[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str_join[i] = s2[j];
		j++;
		i++;
	}
	str_join[i] = '\0';
	return (str_join);
}
/*int main()
{
	printf("%s",ft_strjoin("Hello","everyone"));
	return (0);
}*/
