#include <stdio.h>
/*Daigneault Pearce
	program 2 of "The C programming language"
	extended for educational purposes only.
	This program has been extented to display
	Kelvin values.*/

/* print Fahrenheit-Celsius-Kelvin table
	for fahr = 0, 20, 40, ..., 300 */
#define LOWER -80	/*lower limit of temperature table = average temperature of planet mars*/
#define UPPER 9940	/*upper limit of temperature table = temperature of the sun*/
#define STEP 20		/*step size between table entries*/

int main(){
	int fahr;
	double celsius, kelvin; 
	
	fahr = LOWER;
	printf("F\tC\tK\n");
	while( fahr <= UPPER ){
		celsius = ( 5.0/9.0) * ( fahr - 32.0 ); 	/*celsius = (5/9)(Farenheit - 32)*/
		kelvin = celsius + 273.15;				    /*convert celsius to Kelvin*/
		printf( "%4d\t%5.1f\t%6.2f\n", fahr ,celsius, kelvin );/*print formated table entry*/
		fahr = fahr + STEP;				  	 	    /*increment fahrenheit value by step*/
	}
	
	return 0;
}