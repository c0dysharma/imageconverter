#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string.h>
#include <stdlib.h>

int convertImage(SDL_Surface *srcimage, const char *dstimage);

int main(int argc,  char **argv)
{
    if(argc<5){
        printf("[1]Usage: convertimg srcimage.jpg -o destination.png\n");
        printf("[2]Supoorted formats are: .jpg, .png, .bmp\n");
        printf("[3]To convert jpg/png to webp\n or webp to jpg/png use\n cwebp-linux and dwebp-linux respectively.\n");
        return 1;
    }
    
    SDL_Surface *srcimage = IMG_Load(argv[1]);
	if(srcimage==NULL){
		printf("Unable to fetch Source Image: %s\n", SDL_GetError());
		return 1;
	
	}
	
    const char *dstimage = argv[3];
    int sucess = convertImage(srcimage, dstimage); //return 0 on sucess

    if (!sucess)
        printf("%s created sucessfully!\n", dstimage);
}

int convertImage(SDL_Surface *srcimage, const char *dstimage)
{
    const char *format = dstimage;
    int sucess;
    while (*format != '.')
        format++;

    if (strcmp(format, ".jpg") == 0)
        sucess = IMG_SaveJPG(srcimage, dstimage, 100);

    else if (strcmp(format, ".png") == 0)
        sucess = IMG_SavePNG(srcimage, dstimage);

    else if (strcmp(format, ".bmp") == 0)
        sucess = SDL_SaveBMP(srcimage, dstimage);
    else
    {
        printf("Unkown Format detected!\n");
		printf("Please use cwebp for converting into webp images\n");
		
        return 1;
    }

    return 0;
}
