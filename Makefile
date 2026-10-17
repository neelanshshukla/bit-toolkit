# Compiler to use
CC = gcc
# Compiler flags: -Wall (show all warnings), -Wextra (extra warnings)
CFLAGS = -Wall -Wextra

# The default target when you just type 'make'
all: test

# How to build and run the tests
test: src/bitops.c tests/tests_bitops.c
	$(CC) $(CFLAGS) src/bitops.c tests/tests_bitops.c -o test_runner
	./test_runner

# How to clean up the generated files
clean:
	rm -f test_runner