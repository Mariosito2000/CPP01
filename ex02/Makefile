# COLOR DEFINITION #
RED     := \033[0;31m
YELLOW  := \033[0;33m
BLUE    := \033[0;34m
GREEN   := \033[1;32m
MAGENTA := \033[0;35m
CYAN    := \033[0;36m
WHITE   := \033[0;37m
RESET   := \033[0m

SOURCES	=	main.cpp


OBJS	=	$(SOURCES:.cpp=.o)

NAME	=	Brain

CC		=	c++

#DEBUG	=	-g3

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 $(DEBUG)

RM 		=	rm -rf

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(RED)Compiling $(RESET) $(CC) $(CFLAGS) $<"

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)==========GENERATED $(NAME)==========$(RESET)"

clean:
	@$(RM) $(OBJS)
	@echo "$(YELLOW)==========OBJS DELETED==========$(RESET)"

fclean: clean
	@$(RM) ${NAME}
	@echo "$(RED)==========$(NAME) DELETED==========$(RESET)"

re: fclean all

.PHONY: all clean fclean re