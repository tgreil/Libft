/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgreil <tgreil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 19:27:00 by tgreil            #+#    #+#             */
/*   Updated: 2018/02/23 10:36:58 by tgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	my_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dstlen;
	unsigned int	srclen;

	dstlen = my_strlen(dest);
	srclen = my_strlen(src);
	i = dstlen;
	j = 0;
	if (size > 0)
	{
		while (src[j] && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	if (size <= dstlen)
		return (srclen + size);
	return (dstlen + srclen);
}
