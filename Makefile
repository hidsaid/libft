CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

RM = rm -f

AR = ar rcs

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c

OBJS = ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_strlcpy.o ft_strlcat.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_striteri.o

B_SRCS = ft_lstadd_back_bonus.c	 ft_lstclear_bonus.c   ft_lstiter_bonus.c  ft_lstmap_bonus.c  ft_lstsize_bonus.c ft_lstadd_front_bonus.c  ft_lstdelone_bonus.c  ft_lstlast_bonus.c  ft_lstnew_bonus.c

B_OBJS = ft_lstadd_back_bonus.o  ft_lstclear_bonus.o   ft_lstiter_bonus.o  ft_lstmap_bonus.o  ft_lstsize_bonus.o ft_lstadd_front_bonus.o  ft_lstdelone_bonus.o  ft_lstlast_bonus.o  ft_lstnew_bonus.o

all: $(NAME)

$(NAME): $(OBJS)
	${AR} $(NAME) $^

%.o: %.c
	$(CC) $(CFLAGS) $^ -c -o $@

bonus: $(B_OBJS)
	${AR} $(NAME) $^
	@touch bonus

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
