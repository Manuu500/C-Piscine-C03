/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:01:06 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/07/06 13:29:12 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_word_equal(char a, char b)
{
	return (a == b);
}

int	is_greater(char a, char b)
{
	return (a > b);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	ok;

	ok = 1;
	i = 0;
	while (s1[i] || s2[i])
	{
		if (!is_word_equal(s1[i], s2[i]))
		{
			if (is_greater(s1[i], s2[i]))
			{
				return (1);
			}
			else
			{
				return (-1);
			}
		}
		i++;
	}
	return (0);
}
