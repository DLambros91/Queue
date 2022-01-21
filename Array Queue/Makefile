CXX=g++
CCXFLAGS = -g -Wall -Wpedantic -Werror
OUTPUT = ./main
EXEOBJ = ./main.o
LIBOBJ = ./queue.hpp ./queue.o 
LIBTOKEN = ./libtoken.a 

default: $(OUTPUT)
all: default

%.o: %.hpp
		$(CXX) -c $(CCXFLAGS) -o $@ $<

$(LIBTOKEN): $(LIBOBJ)
		ar rc $(LIBTOKEN) $(LIBOBJ)

$(OUTPUT): $(EXEOBJ) $(LIBTOKEN)
		$(CXX) $(CCXFLAGS) $(EXEOBJ) $(LIBTOKEN) -o $@

clean:
		$(RM) -f *.o $(OUTPUT)
		$(RM) -f $(LIBTOKEN)