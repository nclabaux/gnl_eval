# gnl_eval
A simple test for 42 project "get_next_line" (2019 42cursus version).

## Installation

Clone it into the folder containing your file:
```
git clone https://github.com/nclabaux/gnl_eval
```

## Use

To use it, simply go into the new folder and use 'make':
```
cd gnl_eval && make
./tester [filename] [arg]
```
The buffer_size can be modified on the first line of Makefile.

### Arguments

If no filename is given, the program will use an invalid fd, you can modify 'main.c' to set it to standard input.

The provided .txt files are :
* tester.txt which contains some basic tests, such as empty and short lines
* verylongline.txt which contains a 2500+ characters line
* words.txt which is a dictionnary (useful to make the program run for a little while and test lots of line size)

You can also use '/dev/random/' as a filename to generate random text or '/dev/stdin' to use standard input.

If a third argument is given, the program will test for leaks (using 'leak tester') before ending.
