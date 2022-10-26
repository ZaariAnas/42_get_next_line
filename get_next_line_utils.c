/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:48:47 by azari             #+#    #+#             */
/*   Updated: 2022/10/26 15:00:48 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;
	char *str;

	i = -1;
	j = 0;

	if (!s1)
		str = ft_strdup("");
	else
		str = ft_strdup(s1);
	len1 = ft_strlen(str);
	len2 = ft_strlen(s2);
	ptr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (++i < len1)
		ptr[i] = str[i];
	while (j < len2)
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	free(str);
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;	
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	sub_len;
	size_t	slen;

	i = 0;
	sub_len = ft_strlen(s + start);
	slen = ft_strlen (s);
	if (s)
	{
		if (len > sub_len)
			len = sub_len;
		sub = (char *)malloc((len + 1));
		if (!sub)
			return (0);
		while (i < len && s[start] && start <= slen)
			sub[i++] = s[start++];
		sub[i] = '\0';
		return (sub);
	}
	return (0);
}

char	*ft_strchr(const char *hay, int c)
{
	size_t	i;

	i = 0;
	while (hay[i])
	{
		if (hay[i] == (char)c)
			return ((char *)&hay[i]);
		i++;
	}
	return (0);
}

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	i;

	i = -1;
	ptr = (char *)malloc(ft_strlen(str) + 1);
	if (!ptr)
		return (NULL);
	while (str[++i])
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
