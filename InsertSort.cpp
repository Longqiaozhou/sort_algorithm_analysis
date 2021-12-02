#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <stack>
#include <string>
#include <cstring>

using namespace std;
/*
function   : ��������в�������
param nums : Ҫ�������������
return     : ---
*/
void InsertSort(vector<int> &nums)
{
	for (int i = 1; i < nums.size(); i++)
	{
		int j = i, key = nums[j];
		while (j > 0 && nums[j - 1] > key)
		{
			nums[j] = nums[j - 1];
			j--;
		}
		nums[j] = key;
	}
}
