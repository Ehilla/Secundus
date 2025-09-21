#include <stdio.h>

int func(int num[9])
{
	int plus = num[0]*num[4]*num[8] + num[2]*num[3]*num[7] + num[1]*num[5]*num[6];
	int minus = - 1 *num[2]*num[4]*num[6] -num[3]*num[1]*num[8] - num[0]*num[5]*num[7];
	return plus+minus;	
}


int main()

{
	int poryadok;
	printf("%s\n","Введите порядок от 2 до 3:");
	scanf("%d", &poryadok);
	

		if (poryadok == 2)
			{
			printf("%s\n", "matrix secundus");
			}
		else
			printf("%s\n", "matrix tertius");
		printf("%s\n","======");

		int order = poryadok*poryadok;
		int numbers[order];
		
		printf("%s\n","Write elements of matrix:");
		printf("%s\n", "=======");

		for (int i = 0; i < order; i ++) {
			scanf("%d", &numbers[i]);
			}	
		printf("%s\n", "=======");	


			if (poryadok == 2) {

				for (int j = 0; j < 2; j++) {
					printf("%d ", numbers[j]);
					}	
				printf("\n");	
					for (int h = 2; h < 4; h ++) {
						printf("%d ", numbers[h]);
							}
				printf("\n");
				printf("%s\n", "======");			  	
					}
			if (poryadok == 3) {
				for (int h1 = 0; h1 < 3; h1 ++) {
					printf("%d ", numbers[h1]);
				}
				printf("\n");
				for (int h2 = 3;  h2 < 6; h2 ++) {
					printf("%d ", numbers[h2]);
				}
				printf("\n");
				for (int h3 = 6; h3 < 9; h3 ++) {
					printf("%d ", numbers[h3]);
				}
				printf("\n");	
				printf("%s\n", "=======");		
			}	

	if (poryadok == 2) 
	{
		printf("%s\n", "Найти определитель?	1 - да 	2 - нет");
		int op;
		scanf("%d", &op);
		if (op == 2)
		{
			printf("%s\n", "The end of program");
		
		}
		else
			printf("%s %d\n","Определитель =", numbers[0] * numbers[3] - numbers[1] * numbers[2]);
		printf("\n");
	}		


	if (poryadok == 3)
	{
		printf("%s\n", "Найти определитель?	1 - да  2 - нет");
		int op;
		scanf("%d", &op);
		
		if (op == 2)
		{
			printf("%s\n", "The end of program");
		}
		else
			printf("%s %d\n","Определитель =", func(numbers)); 
	printf("\n");
	}

return 0;

}
