#include <stdio.h>  
#include <conio.h>  
int main ()  
{  
       
    int a[20], i, j, k, size,count=0;  
      
    printf (" enter the size ");  
    scanf (" %d", &size);  
      
    printf (" \n Enter the elements ");  
     
    for ( i = 0; i < size; i++)  
    {  
        scanf (" %d", &a[i]);  
    }  
      
      
     
    for ( i = 0; i < size; i++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
             
            if ( a[i] == a[j]) 
			{
				a[i]=0;
				count++;
			}
		}
    }
                 
    
      
      
      
    printf (" \n final array ");  
      
      
    for ( i = 0; i < size; i++)  
    {  
        printf (" %d \t",a[i]);  
    }
	printf("no of duplicates= %d ",count);  
    return 0;  
}  
