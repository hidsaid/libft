/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:14:44 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/10 22:30:12 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	wd;
	int	i;

	count = 0;
	wd = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (wd == 0)
			{
				wd = 1;
				count++;
			}
		}
		else
		{
			wd = 0;
		}
		i++;
	}
	return (count);
}

static void	free_arr(char **arr, int j)
{
	while (j >= 0)
		free(arr[j--]);
	free(arr);
}

static char	**alloc_4_wd(char const *s, char **arr, char c, int ar_len)
{
	int	i;
	int	j;
	int	wd_len;

	i = 0;
	j = 0;
	while (j < ar_len)
	{
		wd_len = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			wd_len++;
			i++;
		}
		arr[j] = (char *)malloc((wd_len + 1) * sizeof(char));
		if (arr[j] == NULL)
		{
			free_arr(arr, j);
			return (NULL);
		}
		j++;
	}
	return (arr);
}

static char	**fill_arr(char **arr, char const *s, char c, int ar_len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < ar_len)
	{
		k = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			arr[j][k] = s[i];
			i++;
			k++;
		}
		arr[j][k] = '\0';
		j++;
	}
	arr[j] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	if (alloc_4_wd(s, arr, c, count_words(s, c)) == NULL)
		return (NULL);
	fill_arr(arr, s, c, count_words(s, c));
	return (arr);
}
/*int main(void)
{
    char **arr;
    int i;

    arr = ft_split("hello world", ' ');
    i = 0;

    printf("[");
    if (arr == NULL)
    {
        printf("good");
    }
    else
    {
        while (arr[i] != NULL)
        {
            printf("\"%s\"", arr[i]);
            if (arr[i + 1] != NULL)
                printf(", ");
            i++;
        }
    }
    printf("]\n");

    if (arr != NULL)
    {
        i = 0;
        while (arr[i] != NULL)
        {
            free(arr[i]);
            i++;
        }
        free(arr);
    }
    return 0;
}*/
