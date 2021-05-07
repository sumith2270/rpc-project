struct numbers{
	int a;
	int b;
	char *c;
};

program CALC_PROG{
	version CALC_VERS{
		int calc(numbers)=1;
	}=1;
}=0x7772877;
