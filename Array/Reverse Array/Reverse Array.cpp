// Reverse Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;
void ReadArray(int arr[] , int n)
{
	
	for (int i = 0; i < n; i++)
	{
	//	cout << "enter Element: ";
		cin >> arr[i];

	}
}
void PrintArray(int arr[],int n)
{
	
	cout << " [ ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "," ;
		

	}
	cout << "]" <<endl;
}
//void ReverseArray(int arr[],int n) {
//
//	int start = 0, End = n - 1;
//	
//	while (start<=End)
//	{// swap
//		int Temp = arr[start];
//		arr[start] = arr[End];
//		arr[End] = Temp;
//		start++; End--;
//
//
//	}
//}


int Even(int n) {
	return n % 2 == 0;
}

void ArrangeWithEvenNumbers(int arr[],int arr2[], int n)
{
	int start = 0, End = n - 1;
	for (int i = 0; i < n; i++)
	{
		if (Even(arr[i]))
		{
			arr2[start] = arr[i];
			start++;
		}
		else
		{
			arr2[End] = arr[i];
			End--;
		}
	
	}
	
	PrintArray(arr2,n);
}

int main()
{

	int arr[100], n=7;
	int arr2[100];
	//9 4 5 2 6 7 11
	//4 2  6 9 5 7 11
	ReadArray(arr, n);
	ArrangeWithEvenNumbers(arr, arr2, n);
	

	//cout << "Before Reversing" << endl;
	//PrintArray(arr, n);
	//ReverseArray(arr, n);
	//cout << "After Reversing" << endl;
	//PrintArray(arr, n);




}
