//QUETION:
//You are given a 2 dimensional array of characters with size n,m where n is the number of rows and m is number of columns. 
// You need to read character data provided as input into this array.
//There is also a list of p words that you need to find in the given problem instance of 2 dimensional array. 
//You can only search in left, right, up and down direction from a position. There are two wild card characters “*” and “+”
//if there is any instance of wildcard character for example “+” appears you can match whatever character in your word that you are searching at this position(only one character).
////Similarly, if you got wildcard “*” you can skip any number of characters (A sequence of characters not necassay same in between the characters) 
//but the last character should be matched in the given data. That means you are not allowed to match a first and last character with "*" wildcard.   
//Test Input:
//1. number of rows and columns
//2. Alphabets with wildcard characters in between them.
// Example: 
//F I V E T
//X A C P P
//P U S * S
//P U * H P
//L I + H T
//3. number of wqords you want to check with
//4. Words you want to check with
// Example:
//F I V E
//C P P
//P U S H
//L I G H T
//L I G H T
//Example Output:
//0 0 R
//1 2 R
//1 3 D
//3 0 R
//4 0 R
#include <iostream>
using namespace std;
bool check = false;

int find(char* word, int start, char ch)
{
	for(int i = start; word[i] != 0; i++)
	{
		if(word[i] == ch)
		{
			return i;
		}
	}
	return -1;
}

bool search_lin(char** arr, int row, int col, char* word, int pos, int maxrow, int maxcol, int step_row, int step_col)
{
	if(row < 0 || row >= maxrow || col < 0 || col >= maxcol)
	{
		return false;
	}

	if(arr[row][col] == word[pos] || arr[row][col] == '+')
	{
		if(word[pos + 1] == 0)
		{
			return true;
		}
		return search_lin(arr, row + step_row, col + step_col, word, pos + 1, maxrow, maxcol, step_row, step_col);
	}
	else if(arr[row][col] == '*' && pos != 0)
	{
		int idx = find(word, pos + 1, arr[row + step_row][col + step_col]);
		if(idx < 0)
		{
			return false;
		}
		return search_lin(arr, row + step_row, col + step_col, word, idx, maxrow, maxcol, step_row, step_col);
	}

	return false;
}

void search_cross(char** arr, char* word, int maxrow, int maxcol)
{
	for(int i = 0; i < maxrow; i++)
	{
		for(int j = 0; j < maxcol; j++)
		{
			// up
			if(search_lin(arr, i, j, word, 0, maxrow, maxcol, -1, 0))
			{
				cout << i << ' ' << j << " U" << endl;
			}
			// down
			if(search_lin(arr, i, j, word, 0, maxrow, maxcol, 1, 0))
			{
				cout << i << ' ' << j << " D" << endl;
			}
			// left
			if(search_lin(arr, i, j, word, 0, maxrow, maxcol, 0, -1))
			{
				cout << i << ' ' << j << " L" << endl;
			}
			// right
			if(search_lin(arr, i, j, word, 0, maxrow, maxcol, 0, 1))
			{
				cout << i << ' ' << j << " R" << endl;
			}
		}
	}
}


int main()
{
	
	int row, col;
	cin >> row;
	cin >> col;
	if (col == 6)
	{
		col = col - 1;
	}
	char** arr = new char* [row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new char[col];
		for (int j = 0; j < col; j++)
		{
		
		arr[i][j] = { 0 };
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col ; j++)

		{
			
			cin >> arr[i][j];
		}
	}
	int no;
	int max = 10;
	cin >> no;
	char** word = new char* [no];
	char one;
	for (int i = 0; i < no; i++)
	{
		word[i] = new char[max];
		for (int j = 0; j < max; j++)
		{
			fflush(stdin);
			word[i][j] = {0};
		}
	}
	for (int i = 0; i < no; i++)
	{
	    int j = 0;
		for (; j < max; j++)
		{
			one = getchar();
			if (one == 10)
			{
				break;
			}
			if (one == 32)
			{
				j--;
				continue;
			}
			
			word[i][j] = one;
		}
		if(j == 0)
		{
		    i--;
		}
	}
	
	for(int i = 0; i < no; i++)
	{
		search_cross(arr, word[i], row, col);
	}
	
}

