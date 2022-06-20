#include <stdio.h>
int main() {
  int m, n, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the number of rows  ");
  scanf("%d", &m);
  printf("Enter the number of columns  ");
  scanf("%d", &n);

  printf("\nEnter elements A ");
  for (i = 0; i < m; ++i)
    for (j = 0; j < n; ++j) {
      printf("Enter element ");
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements B ");
  for (i = 0; i < m; ++i)
    for (j = 0; j < n; ++j) {
      printf("Enter element");
      scanf("%d", &b[i][j]);
    }

  
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
	 {
      sum[i][j] = a[i][j] + b[i][j];
    }


  printf("\nSum of two matrices: \n");
  for (i = 0; i < m; i++)
  {
  
  	
    for (j = 0; j < n; j++)
	 {
      printf("%d ",sum[i][j]); 
      
     }
     printf("\n");
 }
}

