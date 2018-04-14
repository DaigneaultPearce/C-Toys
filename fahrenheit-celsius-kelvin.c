#include <stdio.h>
/*Daigneault Pearce
	program 2 of "The C programming language"
	extended for educational purposes only.
	This program has been extented to display
	Kelvin values.*/

/* print Fahrenheit-Celsius-Kelvin table
	for fahr = 0, 20, 40, ..., 300 */

int main(){
	int fahr, step;
	int lower, upper;
	double celsius, kelvin;

	
	lower = -80; /*lower limit of temperature table = average temperature of planet mars*/
	upper = 9940;/*upper limit of temperature table = temperature of the sun*/
	step = 20;   /*step size between table entries*/
	
	fahr = lower;
	printf("F\tC\tK\n");
	while( fahr <= upper ){
		celsius = ( 5.0/9.0) * ( fahr - 32.0 ); 	/*celsius = (5/9)(Farenheit - 32)*/
		kelvin = celsius + 273.15;				    /*convert celsius to Kelvin*/
		printf( "%4d\t%5.1f\t%6.2f\n", fahr ,celsius, kelvin );/*print formated table entry*/
		fahr = fahr + step;				  	 	    /*increment fahrenheit value by step*/
	}
	
	return 0;
}