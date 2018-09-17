/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:17:51 by sfernand          #+#    #+#             */
/*   Updated: 2018/09/11 18:36:07 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	pos;
	unsigned int	i;

	if (!to_find)
	{
		return (str);
	}
	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == to_find[0])
		{
			i = 1;
			while (to_find[i] == '\0' && str[pos + i] == to_find[i])
			{
				++i;
			}
			if (to_find[i] == '\0')
			{
				return (&str[pos]);
			}
		}
		++pos;
	}
	return (0);
}