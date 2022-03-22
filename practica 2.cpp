/* PRACTICA DE EJERCICIO EN C */
/* EL SIGUIENTE SOLICITA DOS VALORES POR PANTALLA Y MUESTRA SU SUMA */

/* CAMBIOS */

/* una vez comprobado el codigo, debera realizar el sig. cambio, el programa debe
mostrar ademas el promedio de los valores engresados*/

/* COMPILAR Y PROBAR */

/*===/ Import libraries /===*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

main(){
	
	/*===/ Inicializamos las variables de nuestra calculadora /===*/
	float valor1;
	float valor2;
	char operacion;
	// float total;
	float prom;
	
	// Definimos las entradas de datos, utilziando scanf
	printf("IZO");
	printf("Calculadora simple\n\n");
	
	// Primer numero
	printf("Ingrese el primer valor:");
	scanf("%f", &valor1);
	
	// Segundo numero
	printf("Ingrese el segundo valor:");
	scanf("%f", &valor2);
	
	// Eliger operacion
	printf("Ingrese una operacion:");
	scanf("%s", &operacion);
	
	/*===/ Ejecutamos la operacion elejida /===*/
	
	// Forma utilizando SWITCH
	switch(operacion){
		
		case '+': printf("El resultado de la suma es: %.2f\n", valor1 + valor2);
		break;
		
		case '-':printf("El resultado de la resta es: %.2f\n", valor1 - valor2);
		break;
		
		case '/':printf("El resultado de la resta es: %.2f\n", valor1 / valor2);
		break;
		
		case '*':printf("El resultado de la resta es: %.2f\n", valor1 * valor2);
		break;
		
		default: printf("¡¡ERROR!! No se a encontrado la operacion");
	}
	
	// Forma utlizando if
	
	/*
	
	if(strcmp(operacion, "+") == 0){
		
		total = valor1 + valor2; 
		
		printf("El resultado de la suma es: %.2f\n", total);
		
	} else if(strcmp(operacion, "-") == 0){
		
		total = valor1 - valor2; 
		
		printf("El resultado de la resta es: %.2f\n", total);
		
	} else if(strcmp(operacion, "/") == 0){
		
		total = valor1 / valor2; 
		
		printf("El resultado de la division es: %.2f\n", total);
		
	} else if(strcmp(operacion, "*") == 0){
		
		total = valor1 * valor2; 
		
		printf("El resultado de la multiplicacion es: %.2f\n", total);
		
	} else {
		
		printf("¡¡Error!! La operacion no se a encontrado");
	}
	
	*/
	
	
	/*===/ Prodio de los valores ingresados /===*/
	prom = (valor1 + valor2) / 2; 
	printf("El promido de los valores ingresados es: %.2f\n", prom);
	
	system("pause");
	getch();
}




