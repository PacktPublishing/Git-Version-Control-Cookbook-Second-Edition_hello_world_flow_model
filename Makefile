
SRC= hello_world.c
OBJ=${SRC:.c=.o}
LDFLAGS=-lm
LFLAGS = -Wall 
CFLAGS = -Wall

all: hello

hello: ${OBJ}
	${CC} -o $@ ${OBJ} ${LDFLAGS}

clean:
	rm -f *.o hello
