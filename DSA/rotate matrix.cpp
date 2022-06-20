#include<iostream> 
using namespace std;
int main()
{   
  int n;
  cout<<"Enter size of matrix: ";
  cin>>n;
  int a[n][n];
  cout<<"\nEnter matrix elements:\n";
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin>>a[i][j];
      }
  }
  for (int i=0;i<n/2;i++) 
  { 
    for (int j=i;j<n-i-1;j++) 
    { 
      
            int temp=a[i][j]; 
            a[i][j]=a[n-1-j][i]; 
            a[n-1-j][i]=a[n-1-i][n-1-j]; 
            a[n-1-i][n-1-j]=a[j][n-1-i]; 
            a[j][n-1-i]=temp; 
    } 
  }
    
  
  cout<<"\nMatrix after rotating 90 degree:\n";
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cout<<a[i][j]<<" ";
      }
      cout<<"\n";
  }
  return 0;
}
