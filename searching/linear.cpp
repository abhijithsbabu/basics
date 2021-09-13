#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of elements\t";
	cin>>n;
	int elements[n];
	for(auto i = 0;i < n;i++)
	{
		cin>>elements[i];
	}
	int num;
	cout<<"Enter the number to search\t";
	cin>> num;
	for(auto i = 0;i<n;i++)
	{
		if(elements[i] == num)
		{
			cout<<i<<"\n";
		}
	}
	return 0;
}


