CC=g++

CFLAGS+=-std=c++20
CFLAGS+=-Wall
LIB=-lfltk
LIB+=-lmgl
LIB+=-lmgl-fltk


SRC =
SRC += form.cxx
SRC += main.cxx


all:main

main:main.cxx
	$(CC) $(CFLAGS)  $(SRC) $(LIB) -o main

libform:libform.a
	ar rcs  libform.a form.o 


clean:
	rm -rf d2d main name file  form.o
