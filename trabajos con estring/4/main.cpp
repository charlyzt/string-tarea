#include <string.h>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) 
{
	setlocale(LC_CTYPE, "spanish");



a) STRCPY(string destino,string original);

Se utiliza para copiar el contenido de un string original en un string de destino.

ejemplo:

char nombre[30],copia[30];

nombre= getstring(“nombre”);

strcpy(copia,nombre);

strcpy(nombre,”pato”);

b) STRCAT(string1,string2);

Encadena o agrega al final de la string1 la string2.

ejemplo: char nombre[30],copia[30];

strcpy(nombre,"pepe");

strcat(nombre,"lopez");

c) STRCMP(string1,string2);

ejemplo: char opcion[3];

strcmp(opcion,"si");

if(strcmp(opcion,"si")==0)

d) STRLEN(string);

Esta función regresa la cantidad de caracteres que tiene la string.

ejemplo: char nombre[30];

strcpy(nombre,”juan”);

printf(”%d”,sizeof(nombre)); ?REGRESA 30

printf”%d”,strlen(nombre)); ?REGRESA 4
