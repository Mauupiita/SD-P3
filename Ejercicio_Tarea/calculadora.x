struct nums{
		float n1;
		float n2;
	};
program CALCULADORA_PROG
{
	version CALCULADORA_VERS
	{
		float suma(nums) = 1;
		float resta(nums) = 2;
		float multiplicacion(nums) = 3;
		float division(nums) = 4;
	}=1;
} = 0x31111111;
