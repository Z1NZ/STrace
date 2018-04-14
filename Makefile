#Library output
NAME = ft_strace

#CLANG flags
ALL_CFLAGS = -Wall -Wextra -Werror -Weverything

#Includes directories
INC = includes
INCLUDES += $(addprefix -iquote , $(INC))

#Sources
FT_NM_SOURCES = $(shell find src | grep "\.c$$" | sed "s/\.c$$//g")
SRCS = $(addsuffix .c, $(FT_NM_SOURCES))
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo ">>>>> Génération de ($(NAME))"
	cc $(ALL_CFLAGS) $(OBJS) $(INCLUDES) -o $(NAME) -g
	@echo "Terminée"

# To obtain object files
%.o: %.c
	$(CC) -c $(ALL_CFLAGS) $(INCLUDES) $< -o $@

# To remove generated files
clean:
	@echo "RM\ttous les objects (.o)"
	@$(RM) $(OBJS)

fclean: clean
	@echo "RM\tprojet ($(NAME))"
	@$(RM) $(NAME)

re: fclean all

git:fclean
	@git add .
	@echo "Enter Your Commit :"
	@read var1 ; git commit -m "$$var1"
	@git push