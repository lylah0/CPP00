# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/27 14:50:12 by lylrandr          #+#    #+#              #
#    Updated: 2025/06/24 15:22:22 by lylrandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_DIR = src
SRC = $(shell find $(SRC_DIR) -type f -name "*.cpp")
OBJDIR = obj
OBJS = $(SRC:src/%.cpp=$(OBJDIR)/%.o)
DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $@ $(CFLAGS)

$(OBJDIR)/%.o: src/%.cpp
# Crée le sous-dossier si nécessaire
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -MMD -c $< -o $@

# S'assurer que obj/ existe
$(OBJDIR):
	@mkdir -p $(OBJDIR)

-include $(DEPS)

clean:
	@rm -f $(OBJS) $(DEPS)

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJDIR)

re: fclean all

.PHONY: all clean fclean re
