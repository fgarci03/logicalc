# run mingw32-make on Windoze
all: main.c
	gcc main.c src/logicalc.c

# check:
#	- http://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html
#	- http://mrbook.org/blog/tutorials/make/
#	- http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

# todo fgarcia: build a custom makefile
