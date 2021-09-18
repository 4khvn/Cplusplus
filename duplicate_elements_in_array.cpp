#include<iostream>
using namespace std;
int newarr(int& temp, int  n, int arr[]);
class classa
{
public:
    int size;
    int* arr;
    
public:
    classa()
    {
        cout << "Enter size of array: " << endl;
        cin >> size;
        arr = new int[size];
        cout << "Enter elements of array: " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    ~classa()
    {
    	delete[] arr;
    
	}
    void DuplicateCheck()
    {	
		bool* temp = new bool[size];
        for (int i = 0; i < size-1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                   temp[j] = true;
                }
            }
        }
        for (int i = 0; i < size; i++)
        {
            if(temp[i] != true)
            {
            	cout << arr[i];
			}
        }
        	delete [] temp;
    }
   
};
int main()
{
    classa obj;
    obj.DuplicateCheck();
}
