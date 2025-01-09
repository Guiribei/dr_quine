PROGRAMS = Colleen Grace

PATH_SRC = ./sources/
PATH_OBJ = ./objects/

SRCS = $(addprefix $(PATH_SRC), $(PROGRAMS:=.c))
OBJS = $(addprefix $(PATH_OBJ), $(PROGRAMS:=.o))

INCLUDES = -I ./includes/
FLAGS = -Wall -Wextra -Werror

all: $(PROGRAMS)

$(PROGRAMS): %: $(PATH_OBJ)%.o
	cc $(FLAGS) $< -o $@

$(PATH_OBJ)%.o: $(PATH_SRC)%.c
	mkdir -p $(PATH_OBJ)
	cc $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(PATH_OBJ)
	@echo "\033[1;93m[SUCCESS] Objects removal done!\033[0m"

fclean: clean
	rm -f $(PROGRAMS)
	rm -f Grace_kid.c
	rm -f *_test.c
	@echo "\033[1;93m[SUCCESS] Programs and test files removed!\033[0m"


re: fclean all

test_Colleen: Colleen
	./Colleen > Colleen_test.c
	diff $(PATH_SRC)Colleen.c Colleen_test.c
	@echo "\033[1;92m[SUCCESS] Colleen test passed!\033[0m"

test_Grace: Grace
	./Grace > Grace_test.c
	diff $(PATH_SRC)Grace.c Grace_kid.c
	@echo "\033[1;92m[SUCCESS] Grace test passed!\033[0m"

# Run all tests
test: test_Colleen test_Grace

.PHONY: all clean fclean re test test_Colleen #test_Grace