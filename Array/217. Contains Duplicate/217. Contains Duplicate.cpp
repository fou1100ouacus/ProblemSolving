// 217. Contains Duplicate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {


	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[i] == nums[j])
			{
				return true;

		    }
		}


	}
	return false;
}
int main()
{
 vector<int> v = { 1,2,3 };


 cout << containsDuplicate(v);









}

