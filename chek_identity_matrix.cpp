#include<iostream>
using namespace std;
int main()
{
	int check;
	int rows, col;
	This:
	cout << endl <<"Enter rows:" << endl;
	cin >> rows;
	cout << "Enter columns:" << endl;
	cin >> col;
	if(rows != col)
	{
		cout << "not an identity matrix";
			goto This;
	}

	int arr[rows][col];
	cout << "please fill the array";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin >> arr[i][j];
		}
	}
	for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cout <<" "<< arr[j][i];
	}
	cout << endl;
}

for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		if(i==j && arr[i][j] != 1)
		{
			check = 1;
			break;
		}
		else if(i !=j && arr[i][j] != 0)
		{
			check =1;
			break;
		}
		
	}
	
}
if(check != 1)
		{
		cout << "Matrix is identity";	
		}
		else
		{
			cout << "Matrix not identity";
		}
}
	

