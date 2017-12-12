#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */

main()
{
	float fahr, celsius;
	int lower, upper, step;

	printf("%3s\t%6s\n", "Farhrenheit", "Celsius");

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit of temperature table */
	step = 20;	/* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

		printf("\n\nCelsius\tFarhrenheit\n");	
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%6.1f\t%3.0f\n", celsius, fahr);
		fahr = fahr + step;
	}

}
