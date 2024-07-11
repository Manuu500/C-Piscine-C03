/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:27:55 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/07/06 17:39:06 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	j;

	j = 0;
	counter = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	while (src[j] != '\0')
	{
		dest[counter + j] = src[j];
		j++;
	}
	dest[counter + j] = '\0';
	return (dest);
}
