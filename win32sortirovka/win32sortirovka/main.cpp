#include <iostream>
using namespace std;

int main()
{
    
    int size;
	cout <<"Enter size of array:";
    cin >> size;
	int *a = new int[size];
    for (int i = 0; i < size; i++)
    {
		cout <<"A["<<i<<"]"<<"=";
		cin >> a[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (a[j] < a[j - 1])
            {
                swap (a[j], a[j - 1]);
            }
        }
    }
	cout << "array was sorted:"<<endl;
   for (int i = 0; i < size; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}