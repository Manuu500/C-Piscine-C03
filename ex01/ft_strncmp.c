/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:46:33 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/07/06 17:42:25 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	words_exists(char c, char e)
{
	return (c || e);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (words_exists(s1[i], s2[i]) && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
