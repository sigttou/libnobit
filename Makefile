CC = gcc
CFLAGS = -fPIC -Wall -Wextra -O2 -g
LDFLAGS = -shared
TARGET = libnobit.so

SRC = nobit.c
OBJ = $(SRC:.c=.o)
INC = ./include

.PHONY: all
all: ${TARGET}

$(TARGET): $(OBJ)
	$(CC) -I$(INC) ${LDFLAGS} -o $@ $^

$(SRC:.c=.d):%.d:%.c
	$(CC) -I$(INC) $(CFLAGS) -MM $< >$@

include $(SRC:.c=.d)

.PHONY = clean
clean:
	-rm -f ${TARGET} ${OBJ} $(SRC:.c=.d)
