
#include <iostream>
using namespace std;
 int MAX = 100;

int main()
{
	int m = 4, n = 4;
	int a[MAX][MAX];
	int val = 1;
	int k = 0, l = 0;
	while (k < m && l < n)
	{
		
		for (int i = l; i < n;i++)
			a[k][i] = val++;

		k++;

		
		for (int i = k; i < m; ++i)
			a[i][n-1] = val++;
		n--;

	
		if (k < m)
		{
			for (int i = n-1; i >= l; --i)
				a[m-1][i] = val++;
			m--;
		}

	
		if (l < n)
		{
			for (int i = m-1; i >= k; --i)
				a[i][l] = val++;
			l++;
		}
	}
	for (int i=0; i<m; i++)
	{
	for (int j=0; j<n; j++)
		cout << a[i][j] << " ";
	cout << endl;
	}
	return 0;
}

