/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:03:02 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/09 16:02:42 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_str(char c, const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (-1);
}

static int	find_start(char const *s, char const *set)
{
	int	i;
	int	start;

	i = 0;
	start = -1;
	while (s[i] != '\0')
	{
		if (char_in_str(s[i], set) == -1)
		{
			start = i;
			break ;
		}
		i++;
	}
	return (start);
}

static int	find_end(char const *s, char const *set)
{
	int	i;
	int	end;

	i = ft_strlen(s) - 1;
	end = -1;
	while (i >= 0)
	{
		if (char_in_str(s[i], set) == -1)
		{
			end = i;
			break ;
		}
		i--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	int		len;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = find_start(s1, set);
	end = find_end(s1, set);
	len = end - start + 1;
	if (start == -1 || end == -1)
		len = 0;
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (NULL);
	while (start <= end && len != 0)
	{
		s2[i] = s1[start];
		start++;
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int main()
{
	printf("%s",ft_strtrim("abcachello worldabca","abc"));
	return (0);
}*/
