/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:32:28 by ogenc             #+#    #+#             */
/*   Updated: 2023/03/07 18:32:52 by ogenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include<stdlib.h>
# include<unistd.h>
# include<signal.h>

char	*itoa_pid(int nb);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*convertbinary(unsigned char a);

#endif
