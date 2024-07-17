#!/bin/bash

# Name of the static library
LIBRARY_NAME="liball.a"

# Compile all .c files in the current directory into .o files
for file in *.c; do
    gcc -c "$file"
done

# Create the static library from all .o files
ar rcs "$LIBRARY_NAME" *.o

# Optionally, create an index for the library (ranlib is often not necessary on modern systems)
ranlib "$LIBRARY_NAME"

# Clean up the .o files (optional)
rm *.o

echo "Static library $LIBRARY_NAME created successfully."

