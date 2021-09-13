#include<iostream>
using namespace std;

int main()
{
	int arr[10] = {1,4,7,5,8,2,3,9,15,6};
	for(int i = 0;i<10;i++)
	{
		for(int j = 0;j<9;j++)
		{
			if(arr[j] > arr[j+1])
			{
				arr[j+1] = arr[j+1] + arr[j];
				arr[j] = arr[j+1] - arr[j];
				arr[j+1] = arr[j+1] - arr[j];
			}
		}
	}
	for(int i = 0; i<10;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\n\n";
	return 0;
}
