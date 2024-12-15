/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:53:26 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/06 00:29:17 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!big && len == 0)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	if (little[0] != '\0')
	{
		while (big[i] != '\0' && i < len)
		{
			if (big[i] == little[0])
			{
				if (ft_strncmp(big + i, little, ft_strlen(little)) == 0 && i
					+ ft_strlen(little) <= len)
				{
					return ((char *)(big + i));
				}
			}
			i++;
		}
	}
	return (NULL);
}
/*int main()
{
	char *str = "I believe 1337 is the best coding school";
	printf("%s",ft_strnstr(str, "1337", 12));
	char main_string[50] = "Hello, how's the weather today?";
    	char search_string[30] = "weather";

    	char *found_string = ft_strnstr(main_string, search_string,30);

    	if (found_string == NULL)
    	{
        	printf ("\nSubstring not found in the string\n");
    	}
    	else
   	{
        	printf ("\nSubstring located -> %s", found_string);
   	}
	return 0;
}*/
