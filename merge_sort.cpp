#include<iostream>
using namespace std;
int merge(int[],int,int,int);
int printarray(int[],int);
int merge_sort(int arr[],int start,int end)
{
	if(start>=end)
	{
		return 0;
	}
	int middle = (start + end)/2;
	merge_sort(arr,start,middle);
	merge_sort(arr,middle+1,end);
	merge(arr,start,middle,end);
	printarray(arr,end);
	return 0;
}

int merge(int arr[],int start,int middle,int end)
{
	int left_size = middle + 1 - start;
	int right_size = end - middle;
	int *leftarray = new int[left_size];
	int *rightarray = new int[right_size];
	for(auto i = 0;i<left_size;i++)
	{
		leftarray[i] = arr[i];
	}
	for(auto j = 0;j<left_size;j++)
	{
		rightarray[j] = arr[middle + j];
	}
	int current = 0,left = 0,right = 0;
	while(left<=left_size && right<=right_size)
	{
		if(leftarray[left]>rightarray[right])
		{
			arr[current] = leftarray[left];
			left++;
		}
		else
		{
			arr[current] = rightarray[right];
			right++;
		}
		current++;
	}
	if(left == left_size)
	{
		arr[current] = leftarray[left];
	}
	else
	{
		arr[current] = rightarray[right];
	}
	return 0;
}

int printarray(int arr[],int n)
{
	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\n\n";
}

int main()
{
	int n;
	cout<<"Enter the size of the array\t";
	cin>>n;
	int arr[n];
	for(auto i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	printarray(arr,n);
	merge_sort(arr,0,n-1);
	printarray(arr,n);
	return 0;
}
