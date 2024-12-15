/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:47:46 by hidsaid           #+#    #+#             */
/*   Updated: 2024/10/27 23:34:57 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_string;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	sub_string = (char *)malloc((len + 1) * sizeof(char));
	if (sub_string == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_string[i] = s[start];
		i++;
		start++;
	}
	sub_string[i] = '\0';
	return (sub_string);
}

/*int	main(void)
{
	char	*str;

	str = "Hello world";
	printf("%s", ft_substr(str, 3, 8));
	return (0);
}*/
