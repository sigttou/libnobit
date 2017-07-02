CC = gcc
CFLAGS = -fPIC -Wall -Wextra -I./include -O2 -g -Wno-missing-braces
LDFLAGS = -shared
TARGET = libnobit.so

SRC = nobit.c
OBJ = $(SRC:.c=.o)

.PHONY: all
all: ${TARGET}

$(TARGET): $(OBJ)
	$(CC) ${LDFLAGS} -o $@ $^

$(SRC:.c=.d):%.d:%.c
	$(CC) $(CFLAGS) -MM $< >$@

include $(SRC:.c=.d)

.PHONY = clean
clean:
	-rm -f ${TARGET} ${OBJ} $(SRC:.c=.d)
