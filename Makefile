CC = gcc
OSFLAGS = `sdl2-config --cflags --libs` -lSDL2_image
CFLAGS = -g -std=c11
SRC = imageconverter.c
PROG = convertimg

all:
	$(CC) $(SRC) $(CFLAGS) $(OSFLAGS) -o $(PROG)
