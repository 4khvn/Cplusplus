#include<iostream>
using namespace std;
int main()
{
	int rows,col;
	cout << "Enter rows" << endl;
	cin >> rows;
	cout << endl << "Enter columns" << endl;
	cin >> col;
	int ** arr = new int *[rows];
	cout << "Enter elements in array" << endl;
	for(int i=0;i<rows;i++)
	{
		arr[i] = new int[col];
		for(int j=0;j<col;j++)
		{
			cin >> arr[i][j];
		}
	}
		for(int i=0;i<rows;i++)
	{
			for(int j=0;j<col;j++)
		{
		cout <<" " << arr[i][j];
		}
		cout << endl;
	}
	for(int i=0;i<rows;i++)
	{
		delete[]  arr[i];
	}
	delete[] arr;
}
