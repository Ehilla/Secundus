#include <stdio.h>
#include <stdlib.h>

int order = 0;

#define ELEM(x, y) (matrix[x + (y * order)])

int det(int* matrix) {
    if (order == 1) {
        return ELEM(0, 0);
    }				

    if (order == 2) {
        return ELEM(0, 0) * ELEM(1, 1) - (ELEM(1, 0) * ELEM(0, 1));
    }

    if (order == 3) {
        int f = ELEM(0, 0) * ELEM(1, 1) * ELEM(2, 2) + ELEM(0, 1) * ELEM(1, 2) * ELEM(2, 0) + ELEM(1, 0) * ELEM(2, 1) * ELEM(0, 2);
        int s = -1 * ELEM(0, 2) * ELEM(1, 1) * ELEM(2, 0) - ELEM(0, 1) * ELEM(1, 0) * ELEM(2, 2) - ELEM(0, 0) * ELEM(2, 1) * ELEM(1, 2);
        return f + s;
    }

    printf("Invalid matrix order!\n");
    return -1;
}

int main()
{
    int *matrix;

	printf("%s\n", "============");	
	int first;
	printf("Write an order\n");
	scanf("%d", &order);
	int square = order*order;
	printf("%s\n", "============");

    matrix = (int*) malloc(sizeof(int) * (square));
    if (!matrix) {
        printf("Memalloc failed\n");
        exit(1);
    }
	
	if (order == 0) {
        printf("The matrix is empty\n");
        exit(1);
    }

	if (order == 1) {
		printf("Write element\n");
		printf("\n");
		scanf("%d", &ELEM(0, 0));
    } else {
        printf("Write elements\n");
        printf("\n");

        for (int i = 0; i < order; i++) {
            for (int j = 0; j < order; j++) {
                scanf("%d", &ELEM(i, j));
            }
        }
    	printf("============\n");
    }
	
	printf("%s\n", "============");
	if (order == 1 | order == 2 | order == 3) {
    	printf("Do you want to find a determinant? [y/n]\n");
	
        char yn = 'y';
retry1:
        scanf("%c", &yn);

        switch (yn) {
        case 'y': {
            printf("Determinant = %d\n", det(matrix));
            exit(0);
        } break;
        case 'n': {
        } break;
        default:
            printf("Only y/n are supported!\n");
            goto retry1;
        }

    printf("Wanna write another matrix? 1 - yes, 2 - no\n");
    int another;
    scanf("%d", &another);
	
    if (another == 2)	{
		exit(0);
	} else {
        printf("%s\n", "===========");
        int order2, first2;
        printf("Write an order\n"); 
        scanf("%d", &order2);
        int square2 = order2*order2;
        int matrix2[order2][order2];
              
        printf("%s\n", "============");

        if (order2 == 1) {
            printf("Write element\n");
            printf("\n");
            scanf("%d", &first2);
        } else {
            printf("Write elements\n");
            printf("\n");
      
            for (int i = 0; i < order2; i++) {
                for (int j = 0; j < order2; j++) {
                    scanf("%d", &matrix2[i][j]);
                }
            }
            printf("%s\n", "============");

            for (int i = 0; i < order2; i++) {
                for (int j = 0; j < order2; j ++) {
                    printf("%d ", matrix2[i][j]);
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
                 determinant_secundus = (matrix2[0][0] * matrix2[1][1]) -  (matrix2[1][0] * matrix2[0][1]);
                 printf("%s\n", "============");
                 printf("%s %d\n","Determinant = ", determinant_secundus);

             }
             if (order2 == 3) {
                 int f = matrix2[0][0] * matrix2[1][1] * matrix2[2][2] + matrix2[0][1] * matrix2[1][2] * matrix2[2][0] + matrix2[1][0] * matrix2[2][1] * matrix2[0][2];
                 int s = -1 * matrix2[0][2] * matrix2[1][1] * matrix2[2][0] - matrix2[0][1] * matrix2[1][0] * matrix2[2][2] - matrix2[0][0] * matrix2[2][1] * matrix2[1][2];
                 printf("%s %d\n", "Determinant = ",  f + s);
 
             }
 
         }

		}	
// } //83

	printf("==========\n");	

	if (order == 2) {
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
					//printf("%d %d\n", matrix[0][0] * matrix2[0][0] + matrix[0][1] * matrix2[1][0], matrix[0][0] * matrix2[0][1] + matrix[0][1] * matrix2[1][1]);
					//printf("%d %d\n", matrix[1][0] * matrix2[0][0] + matrix[1][1] * matrix2[1][0], matrix[1][0] * matrix2[0][1] + matrix[1][1] * matrix2[1][1]);
						}
					printf("\n");	

				
				case 2:	{

					//	printf("%d %d\n%d %d\n",matrix[0][0] + matrix2[0][0], matrix[0][1] + matrix2[0][1], matrix[1][0] + matrix2[1][0], matrix[1][1] + matrix2[1][1]);				
	

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
