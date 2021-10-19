#include<iostream>
using namespace std;
int main()
{
    int perm = -9999999999;
    static int comp ;
    
    int n;
    cin >> n;
    if(n <= 1)
    {
    	exit(0);
	}
    int* arr = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    

    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++)
    {
        comp = 0;
        for (int j = i; j < n; j++)
        {
            comp += arr[j];
            if (comp >= perm)
            {
                start = i;
                end = j;
                perm = comp;
            }
        }
    }

    for(int i = start; i <= end; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl << perm;

    return 0;
}
