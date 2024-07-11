/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:30:20 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/07/06 17:38:45 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	counter;

	i = 0;
	counter = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[counter + i] = src[i];
		i++;
	}
	dest[counter + i] = '\0';
	return (dest);
}
