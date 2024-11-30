# プロジェクトの名前
NAME = libft.a

# コンパイラとフラグ
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# ソースファイルとオブジェクトファイル
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

# ヘッダーファイル
HEADER = libft.h

# ルール
all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Archive $(NAME) created successfully!"

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< to $@"

clean:
	@rm -f $(OBJ)
	@echo "Object files removed."

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed."

re: fclean all

# 無関係なファイルとして扱う
.PHONY: all clean fclean re
