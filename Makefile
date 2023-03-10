# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 17:13:52 by ogenc             #+#    #+#              #
#    Updated: 2023/02/27 17:14:08 by ogenc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
SERVER = server
CLIENT = client
CC = gcc
LIB = ./utils.c
CFLAGS = -Wall -Werror -Wextra

all: $(SERVER) $(CLIENT)

$(NAME): all

$(SERVER):
	$(CC) $(CFLAGS) server.c $(LIB) -o $(SERVER)

$(CLIENT):
	$(CC) $(CFLAGS) client.c $(LIB) -o $(CLIENT)

clean:
	rm -rf $(SERVER) $(CLIENT)

fclean: clean

re: fclean all

.PHONY: all flean clean re