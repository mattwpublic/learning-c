main()
{
	double fahr, celsius;
	
	int lower = 0;
	int upper = 300;
	int step = 20;
	
	fahr = lower;
	while(fahr <= upper) {
		celsius = (0.55555) * (fahr-32.0);
		printf("%4.0f %6.3f\n", fahr, celsius);
		fahr += step;
	}
}
