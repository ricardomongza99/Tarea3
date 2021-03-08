// Uses static library - after compiling cannot change until compiling again

#include <stdio.h>
#include "../lib/src/distancias.h"  // static library

int main(int argc, char *argv[]) {
    float dlrecta;
    int dhoriz, dvert;
    	
    dlrecta = dlr(3, 4, 10, 12);

    printf("Distancia en línea recta: %f\n", dlrecta);

	dhoriz = dh(3, 4, 10, 12 );
	dvert = dv(3, 4, 10, 12);

    printf("Distancia horizontal: %d\n", dhoriz);
	printf("Distancia vertical: %d\n", dvert);

	return 0;
}
