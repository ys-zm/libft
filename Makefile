# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yzaim <marvin@codam.nl>                      +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/06 11:28:58 by yzaim         #+#    #+#                  #
#    Updated: 2022/11/01 15:54:11 by yzaim         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

SRCFILES = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

OBJFILES = $(SRCFILES:.c=.o)

ALL = $(BONUSFILES) $(SRCFILES)

BONUSFILES = ft_lstnew_bonus.c \
			 ft_lstadd_front_bonus.c \
			 ft_lstsize_bonus.c \
			 ft_lstlast_bonus.c \
			 ft_lstadd_back_bonus.c \
			 ft_lstdelone_bonus.c \
			 ft_lstclear_bonus.c \
			 ft_lstiter_bonus.c \
			 ft_lstmap_bonus.c

ALLOBJ = $(ALL:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

AR = ar

ARFLAGS = -rcs

all: $(NAME)

$(NAME): $(OBJFILES) $(HEADER)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -f $(ALLOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(ALLOBJ)
	$(AR) $(ARFLAGS) $(NAME) $^

.PHONY: clean fclean all re
