#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	printf("%s\n", "============");	
	int order, first;
	printf("Write an order\n");
	scanf("%d", &order);
	int square = order*order;
	int num[order][order];

		
	printf("%s\n", "============");
	
	if (order == 0) {
          printf("The matrix is empty\n");
      }

	if (order == 1) {
		
		printf("Write element\n");
		printf("\n");
		scanf("%d", &first);
		}

	else	{

	printf("Write elements\n");
	printf("\n");

	for (int i = 0; i < order; i++) {
			for (int j = 0; j < order; j++) {
				scanf("%d", &num[i][j]);
				}
	}
	printf("%s\n", "============");



	for (int i = 0; i < order; i++) {
              for (int j = 0; j < order; j ++) {
                 printf("%d ", num[i][j]);
			}
			printf("\n");
		}
} // 27
	
	printf("%s\n", "============");
	if (order == 1 | order == 2 | order == 3) {
	printf("Do you want to find a determinant? 1 - yes, 2 - no\n");
	
	int answer1;
	scanf("%d", &answer1);
	if (answer1 == 1) {
	
			if (order == 1) {
				printf("%s %d\n","Determinant = ", first);		
			}				
			if (order == 2) {
				int determinant_secundus;
				determinant_secundus = (num[0][0] * num[1][1]) -  (num[1][0] * num[0][1]);
				printf("%s\n", "============");
				printf("%s %d\n","Determinant = ", determinant_secundus);		

			}
			if (order == 3) {
				int f = num[0][0] * num[1][1] * num[2][2] + num[0][1] * num[1][2] * num[2][0] + num[1][0] * num[2][1] * num[0][2];
				int s = -1 * num[0][2] * num[1][1] * num[2][0] - num[0][1] * num[1][0] * num[2][2] - num[0][0] * num[2][1] * num[1][2];
				printf("%s %d\n", "Determinant = ",  f + s);

			}


		}

		printf("Wanna write another matrix? 1 - yes, 2 - no\n");
		int another;
		scanf("%d", &another);
		if (another == 2)	{
		exit(0);
		}
		else	{
		
       	     printf("%s\n", "===========");
			 int order2, first2;
  	  		 printf("Write an order\n"); 
   	  		 scanf("%d", &order2);
      		 int square2 = order2*order2;
       		 int num2[order2][order2];
      
          
      printf("%s\n", "============");
  
      if (order2 == 1) {
  
         printf("Write element\n");
         printf("\n");
		 scanf("%d", &first2);
          }
  
        else    {
  
      printf("Write elements\n");
      printf("\n");
  
      for (int i = 0; i < order2; i++) {
              for (int j = 0; j < order2; j++) {
                  scanf("%d", &num2[i][j]);
                  }
      }
      printf("%s\n", "============");
  
  
  
      for (int i = 0; i < order2; i++) {
                for (int j = 0; j < order2; j ++) {
                  printf("%d ", num2[i][j]);
              }
              printf("\n");
          }
  }
  
      printf("%s\n", "============");
      if (order2 == 1 | order2 == 2 | order2 == 3) {
      printf("Do you want to find a determinant? 1 - yes, 2 - no\n");
  
     int answer2;
     scanf("%d", &answer2);
     if (answer2 == 1) {
 
             if (order2 == 1) {
                 printf("%s %d\n","Determinant = ", first2);
             }
             if (order2 == 2) {
                 int determinant_secundus;
                 determinant_secundus = (num2[0][0] * num2[1][1]) -  (num2[1][0] * num2[0][1]);
                 printf("%s\n", "============");
                 printf("%s %d\n","Determinant = ", determinant_secundus);

             }
             if (order2 == 3) {
                 int f = num2[0][0] * num2[1][1] * num2[2][2] + num2[0][1] * num2[1][2] * num2[2][0] + num2[1][0] * num2[2][1] * num2[0][2];
                int s = -1 * num2[0][2] * num2[1][1] * num2[2][0] - num2[0][1] * num2[1][0] * num2[2][2] - num2[0][0] * num2[2][1] * num2[1][2];
                 printf("%s %d\n", "Determinant = ",  f + s);
 
             }
 
         }

		}	
// } //83

	printf("==========\n");	


	if ((answer1 == 2 | answer1 == 1) & order == 2 ) {
		printf("Do you want to do some operations with matrix? 1 - yes, 2 - no\n");
		int agree;
		scanf("%d", &agree);
		

		if (agree == 1)	{
			
			printf("Each operation has individual sigh: 1 - *; 2 - plus; 3 - minus\n");
			int operation;
			scanf("%d", &operation);
			if (order == order2) {
			switch(operation)	{
				case 1:
				{
	  				printf("Everything is okay\n");
					printf("%d %d\n", num[0][0] * num2[0][0] + num[0][1] * num2[1][0], num[0][0] * num2[0][1] + num[0][1] * num2[1][1]);
					printf("%d %d\n", num[1][0] * num2[0][0] + num[1][1] * num2[1][0], num[1][0] * num2[0][1] + num[1][1] * num2[1][1]);
						}
					printf("\n");	

				
				case 2:	{

						printf("%d %d\n%d %d\n",num[0][0] + num2[0][0], num[0][1] + num2[0][1], num[1][0] + num2[1][0], num[1][1] + num2[1][1]);				
	

					}
				}
					
				}
					printf("Wait a little. I'm working hard for creating new operations!\n");
			}
		}					
	
					
		
					else
						printf("I haven't enough knowledge to do some operations with that\nTry to write square low order matrix\n");

			
}	



}
return 0;
}
