# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 16:54:37 by mlaffita          #+#    #+#              #
#    Updated: 2024/10/26 16:02:23 by mlaffita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME = libft.a

# Source and object diretories
SRCDIR = .
OBJDIR = $(SRCDIR)

# Sources and object files
SOURCE = ft_strlen.c \
         ft_memmove.c \
         ft_memcpy.c \
         ft_strlcpy.c \
         ft_strlcat.c \
         ft_isalpha.c \
         ft_isdigit.c \
         ft_isalnum.c \
         ft_isascii.c \
         ft_isprint.c \
         ft_memset.c \
         ft_bzero.c \
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
		 ft_itoa.c \
         ft_putchar_fd.c \
         ft_putstr_fd.c \
         ft_putendl_fd.c \
         ft_putnbr_fd.c \
		 ft_striteri.c \
		 ft_split.c \
		 ft_strmapi.c \

OBJS = $(addprefix $(OBJDIR)/, $(SOURCE:.c=.o))

# Header file directory
INCLUDES = -I .

# Compiler and flags
COMPILE = gcc
CFLAGS = -Wall -Wextra -Werror

# Default rule: make all is equivalent to make libft.a
all: $(NAME)

# Rule to create the static library libft.a
$(NAME): $(OBJS)
	@echo "Creating library $(NAME)..."
	ar -rcs $(NAME) $(OBJS)

# Compile each .c file to .o
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@echo "Compiling $<..."
	$(COMPILE) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Rule to clean up object files
clean:
	@echo "Cleaning object files..."
	rm -f $(OBJS) 

#Rule to clean  up object files and the library
fclean: clean
	@echo "Cleaning library $(NAME)..."
	rm -f $(NAME)

# Rule to recompile everything
re: fclean all

.PHONY: all clean fclean re