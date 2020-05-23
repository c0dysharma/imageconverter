# imageconverter
Just a toy to convert common Image formats ( *.jpg, *.png, *.bmp, *.webp )
cwebp binaries are from google am too lazy to use APIs so just shared directly.

# Usage:
## Windows

### To convert between formats like .png, .jpg, .bmp
> imgconverter.exe srcimag.jpg -o dstimage.png

### To convert jpg/png/bmp to webp
>cwebp-windows.exe -q 100 srcimage.jpg -o dstimage.webp

Hit cwebp-windows.exe -h to know more.

### To convert webp to jpg/png/bmp
>dwebp-windows.exe srcimage.jpg -o dstimage.webp

Hit dwebp-windows.exe -h to know more.

## Linux
### Dependencies
[SDL2](https://wiki.libsdl.org/Installation) [SDL2_Image](https://www.libsdl.org/projects/SDL_image/)

### To convert between formats like .png, .jpg, .bmp
> ./imgconverter srcimag.jpg -o dstimage.png

### To convert jpg/png/bmp to webp
>cwebp-linux -q 100 srcimage.jpg -o dstimage.webp

Hit cwebp-linux -h to know more.

### To convert webp to jpg/png/bmp
>dwebp-linux srcimage.jpg -o dstimage.webp

Hit dwebp-linux -h to know more.

# Compilation
If precompiled binaries doesn't suits you :)
## linux
$ make
