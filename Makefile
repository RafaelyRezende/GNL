CC=cc

CFLAGS=-Wall -Werror -Wextra

NAME=gnl

LIB=get_next_line.a

SRCS=get_next_line.c get_next_line_utils.c

OBJS=get_next_line.o get_next_line_utils.o

all: gnl

gnl: $(LIB) 
	$(CC) $(CFLAGS) test_main.c -o $@

$(LIB): $(OBJS)
	ar rcs $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c $^
