
SRCS_C = src/main.c src/sub_command.c src/task_command.c deps/linenoise/linenoise.c
CFLAGS = -Ideps/linenoise

all: bin
	$(CC) -Wall -W -Os -g -o bin/flight-cli $(CFLAGS) $(SRCS_C)

run:
	./bin/flight

bin:
	mkdir -p bin

clean: 
	rm -rf *.o

.PHONY: clean run bin
