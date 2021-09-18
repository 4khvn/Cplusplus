#include<iostream>
using namespace std;
int main()
{
	int row,col;
	cout << "Enter rows" << endl;
	cin >> row;
	cout << endl <<  "Enter  column" << endl;
	cin >> col;
	int** arr1 = new int* [row];
	for (int i = 0; i < row; i++)
	{
		arr1[i] = new int[col];
	}
	cout << "Enter elemnts of array: " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> arr1[i][j];
		}
	}
	system("CLS");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << " " << arr1[i][j];
		}
		cout << endl;
	}
	//checking.
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr1[i][j] == arr1[i + 1][j])
			{
				if ((i + 1) > row)
				{
					break;
				}
				cout << "Row" << " " << i << " " << "And" <<" " << i + 1 <<" " << "Are friends at index " <<" " << j << endl;
			}
		}
	}

}
