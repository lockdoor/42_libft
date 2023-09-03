#/****************************************************************************/
#/*                                                                          */
#/*                                                        :::      :::::::: */
#/*   makefile libft.a                                   :+:      :+:    :+: */
#/*                                                    +:+ +:+         +:+   */
#/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+      */
#/*                                                +#+#+#+#+#+   +#+         */
#/*   Created: 2023/08/12 14:40:50 by pnamnil           #+#    #+#           */
#/*   Updated: 2023/08/13 15:11:41 by pnamnil          ###   ########.fr     */
#/*                                                                          */
#/****************************************************************************/

NAME = libft.a

CC = cc
CFLEGS = -Wall -Werror -Wextra

# Rule to compile a .c source file into a .o object file
bin/%.o: %.c
	mkdir -p bin
	$(CC) $(CFLEGS) -c $< -o $@

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
SRCS += ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c 
SRCS += ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c
SRCS += ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c
SRCS += ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c
SRCS += ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c
SRCS += ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS = $(patsubst %.c, bin/%.o, $(SRCS))

B_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c
B_SRCS += ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c
B_SRCS += ft_lstmap.c
B_OBJS = $(patsubst %.c, bin/%.o, $(SRCS) $(B_SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

bonus: $(B_OBJS)
	ar rcs $(NAME) $(B_OBJS)

clean:
	rm -rf bin

fclean: clean
	rm -f $(NAME)

re: fclean all
