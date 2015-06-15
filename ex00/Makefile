# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlambert <rlambert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 11:25:08 by rlambert          #+#    #+#              #
#    Updated: 2015/06/15 14:03:21 by roblabla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=clang++

NAME = megaphone

CFLAGS += -Wall -Wextra -Werror

SRCS = megaphone.cpp \

OBJS = $(patsubst %.cpp,obj/%.o,$(SRCS))

CP = cp

RM = rm -f

all: $(NAME)

MKDIR ?= mkdir

obj/%.o: %.cpp
	$(MKDIR) -p $(dir $@)
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(CXX) -o $@ $(OBJS)

clean:
	$(RM) $(OBJS)
	$(RM) -r obj

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re
