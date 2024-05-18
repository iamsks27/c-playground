#!/bin/bash

# Check if a file name is provided
if [ -z "$1" ]
then
    echo "No C file supplied"
    exit 1
fi

# Check if the file exists
if [ ! -f "$1" ]
then
    echo "File not found!"
    exit 1
fi

# truncating the content of the file
truncate -s 0 error.log

# Compile the C file and check for errors
gcc -Wall -o output "$1" 2> error.log

# If gcc exited with a non-zero status, an error occurred
if [ $? -ne 0 ]
then
    echo "Compilation failed with the following error(s):"
    cat error.log
    exit 1
fi

# printing warning if any
cat error.log

# If we got this far, the compilation was successful
echo "Compilation successful. Running the program"
echo "==========================================="

# Run the program
./output 
