main()
{
	int fahr;
	
	for(fahr = 0; fahr <= 300; fahr += 20)
	{
		printf("%4d %6.1f\n", fahr, (fahr-32)*0.5555);
	}
}
