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
function   : 对数组进行冒泡排序
param nums : 要排序的数组引用
return     : ---
*/
void BubbleSort(vector<int> &nums)
{
	int tmp;
	int n = nums.size();				//数组长度				
	bool Flag = false;					//排序完成标志
	//int C;                              //C:关键字比较次数
	//int M;								//M:记录移动次数	
	while (!Flag)
	{
		bool swap = false;				//交换标志
		for (int i = 0;i < (n - 1) ; i++ )
		{
			if (nums[i] > nums[i + 1]) 
			{
				tmp = nums[i];
				nums[i] = nums[i + 1];
				nums[i + 1] = tmp;
				swap = true;
				//C++;
				//M += 3;
			}
			else 
			{
				//C++;
			}
		}
		if (!swap)
		{
			Flag = true;
		}
	}
}
