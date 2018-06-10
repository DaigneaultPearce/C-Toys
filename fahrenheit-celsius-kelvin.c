#include <stdio.h>
/*Daigneault Pearce
	program 2 of "The C programming language"
	extended for educational purposes only.
	This program has been extented to display
	Kelvin values.*/

/* print Fahrenheit-Celsius-Kelvin table
	for fahr = -80, 20, 40, ..., 9940 */
#define LOWER -80	/*lower limit of temperature table = average temperature of planet mars*/
#define UPPER 9940	/*upper limit of temperature table = temperature of the sun*/
#define STEP 20		/*step size between table entries*/

/*exercise  1-15 asks to modify this proggram to use a function
This function converts fahrenheit to celsius to fahrenheit*/
int tmp_conversion( int fahr );

int main(){
	//Declaration
	int fahr;
	
	//Initialization
	fahr = LOWER;
	printf("F\tC\tK\n");
	
	/*From temp on Mars to temp on Sun
	print temperature conversion*/
	while( fahr <= UPPER ){
		
		//Function call
		tmp_conversion( fahr );
		
		//increment fahrenheit value by step
		fahr = fahr + STEP;
	}
	
	return 0;
}

int tmp_conversion( int fahr ){
	
	double celsius , kelvin;
	
	//celsius = (5/9)(Farenheit - 32)
	celsius = ( 5.0/9.0 ) * ( fahr - 32.0 );
	
	//convert celsius to Kelvin
	kelvin = celsius + 273.15;
	
	//print formated table entry
	printf( "%4d\t%5.1f\t%6.2f\n" , fahr , celsius , kelvin );
	
	return 0;
}
