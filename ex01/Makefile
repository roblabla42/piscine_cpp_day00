# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlambert <rlambert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 11:25:08 by rlambert          #+#    #+#              #
#    Updated: 2015/06/15 14:29:31 by roblabla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = suxbook

CXX=clang++

CFLAGS += -Wall -Wextra -Werror

SRCS = main.cpp \
	   Contact.cpp \
	   PhoneBook.cpp

OBJS = $(patsubst %.cpp,obj/%.o,$(SRCS))

CP = cp

RM = rm -f

all: $(NAME)

MKDIR ?= mkdir

obj/%.o: %.cpp
	$(MKDIR) -p $(dir $@)
	$(CXX) -O0 -c $(CFLAGS) $(CPPFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(CFLAGS)

clean:
	$(RM) $(OBJS)
	$(RM) -r obj/

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re
