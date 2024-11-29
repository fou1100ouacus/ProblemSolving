// 1. Two Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSumloop(vector<int>& nums, int target) {


    vector<int>v;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return { i, j };

            }
        }

    }

    return v;

}
vector<int> twoSum(vector<int>& nums, int target)
{

    map <int, int>map;
    vector<int>v;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map.find(target - nums[i]) != map.end())
        {
            v.push_back(i);
            v.push_back(map[target - nums[i]]);
            return v;
        }
        map[nums[i]] = i;

    }
    return v;


}


int main()
{




}

