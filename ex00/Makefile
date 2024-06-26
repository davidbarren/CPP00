# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/26 03:46:13 by dbarrene          #+#    #+#              #
#    Updated: 2024/06/26 04:38:17 by dbarrene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

COMP = c++

COMPFLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
#	@echo "$(NAME) is being compiled :)"
	@$(COMP) $(COMPFLAGS) $(OBJS) -o $(NAME)
clean:
	@echo "Removing objects"
	@rm -f $(OBJS)
fclean: clean
	@echo "Removing $(NAME)"
	@rm $(NAME)
