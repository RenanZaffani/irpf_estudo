#include <stdio.h>
#include <math.h>

int main()
{
	int dependentes;
	float salario, base, baseajus, aliquota, deducao, IRRF;
	
	for(int cont_func = 0; cont_func <= 5; cont_func++)
	{
		printf("Digite o valor do seu salario: ");
		scanf("%f",&salario);

		printf("Digite a quantidade de dependentes: ");
		scanf("%d",&dependentes);

		baseajus = salario - (dependentes * 189.59);

		if(salario <= 1903.98){
			aliquota = 0;
			deducao = 0;
		}
		if(salario >= 1903.99){
			if(salario <= 2826.65){
				aliquota = 7.50;
				deducao = 142.80;
			}
		}
		if(salario >= 2826.66){
			if(salario <= 3751.05){
				aliquota = 15;
				deducao = 354.80;
			}
		}
		if(salario >= 3751.06){
			if(salario <= 4664.68){
				aliquota = 22.50;
				deducao = 636.13;
			}
		}
		if(salario > 4664.68){
			aliquota = 27.50;
			deducao = 869.36;
		}
		
		IRRF = (baseajus * aliquota / 100) - deducao;
		
		if(IRRF < 0){
			IRRF = 0;
		}
		
		if(salario == 0){
			return 0;
		}
		
		printf("O valor do IRRF ficou em R$ %.2f.\n",IRRF);
	} 
	
	return 0;
}
