#include<stdio.h>
#include<math.h>

int main ()
{
	float a, b, c;
	float raiz1, raiz2;
	float raizprincipal, denominador;
	float resul;
	
	int i=1;
	
	
	while (i=1){
	printf ("\n\n\t\t\t PROGRAMA PARA CALCULAR UNA ECUACION DE SEGUNDO GRADO\n");
	printf ("\n\t\t\tIngrese los valores para A, B, y C\n");
	scanf ("\n\n\t\t\t%f%f%f", &a, &b, &c);
		
	resul = b * b - 4 * a * c;
	raizprincipal = sqrt(resul);
	denominador = 2 * a;
	
	if (resul<0){
		printf(" Ya que el discriminante es menor que cero entonces la ecuacion NO tiene solucion real.");
	}
	
	else {
	
	raiz1 = (-b + raizprincipal ) / denominador;
	raiz2 = (-b - raizprincipal ) / denominador;
	
	printf("Ya que el discriminante es mayor que cero entonces la ecuacion de segundo grado tiene dos raices reales:");	
	printf("\nLa primera raiz es = %f\nLa segunda raiz es = %f", raiz1, raiz2);
	}
	
	}
	return 0;
}
