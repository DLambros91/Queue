CC=g++
CFLAGS = -g -Wall -Wpedantic -Werror
EXEOBJ = ./main.o
LIBOBJ = ./queue.hpp ./queue.o
LIBTOKEN = ./libtoken.a
OUTPUT = ./main
default: $(OUTPUT)
all: default

%.o: %.c
		$(CC) $ $(CFLAGS) -c $< -o $@

$(OUTPUT): $(EXEOBJ) $(LIBTOKEN)
		$(CC) $(CFLAGS) $(EXEOBJ) -o $@

clean:
		$(RM) -f *.o $(OUTPUT)
		$(RM) -f $(LIBTOKEN)