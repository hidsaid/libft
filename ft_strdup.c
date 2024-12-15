/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:34:18 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/22 22:02:26 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s)
{
	char	*new_str;

	new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	new_str[0] = '\0';
	ft_strcpy(new_str, s);
	return (new_str);
}
/*int main()
{
	char *src = "Hafsa";
	printf("%s",ft_strdup(src));
	return 0;
}*/
