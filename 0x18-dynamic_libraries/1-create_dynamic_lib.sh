#!/bin/bash
# Create a dynamic library called liball.so from all .c files in the current directory

gcc -Wall -Werror -Wextra -pedantic -fPIC -shared -o liball.so *.c

