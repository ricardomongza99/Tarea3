// Uses dynamic library - can change after compiling main

#include <stdio.h>
#include "../dynamic/lib_distancias.so"   // dynamic library

int main(int argc, char *argv[]) {
    float dlrecta;
    int dhoriz, dvert;
    	
    dlrecta = dlr(3, 4, 10, 12);

    printf("Distancia en línea recta: %d\n", dlrecta);

	dhoriz = dh(3, 4, 10, 12 );
	dvert = dv(3, 4, 10, 12);

    printf("Distancia horizontal: %d\n", dhoriz);
	printf("Distancia vertical: %d\n", dvert);

	return 0;
}