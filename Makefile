CC = gcc
OSFLAGS = `sdl2-config --cflags --libs` -lSDL2_image
CFLAGS = -g -std=c11
SRC = imageconverter.c
PROG = convertimg

all:
	$(CC) $(SRC) $(CFLAGS) $(OSFLAGS) -o $(PROG)

#windows do the effort if you want to
#gcc imageconverter.c -IC:\mingw64\include -LC:\mingw64\lib -lmingw32 -lSDL2main -lSDL2 \
#-lSDL2_image -o imageconverter.exe
