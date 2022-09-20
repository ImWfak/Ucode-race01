TARGET = Part_of_the_matrix
COMPILATOR = clang

all: copy MINILIBMX little_clean

copy:
	mkdir obj
	cp inc/*.h obj/
	cp src/*.c obj/

MINILIBMX: object.o

object.o:
	$(COMPILATOR) -std=c11 -Wall -Wextra -Werror -Wpedantic -o $(TARGET) obj/*.c

little_clean:
	rm -rf obj

uninstall:
	rm -rf obj
	rm Start

delete_all:
	rm -rf src
	rm -rf inc
	rm -rf obj

reinstall:
	make uninstall
	make
