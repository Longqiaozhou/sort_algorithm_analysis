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
function   : ���������ð������
param nums : Ҫ�������������
return     : ---
*/
void BubbleSort(vector<int> &nums)
{
	int tmp;
	int n = nums.size();				//���鳤��				
	bool Flag = false;					//������ɱ�־
	//int C;                              //C:�ؼ��ֱȽϴ���
	//int M;								//M:��¼�ƶ�����	
	while (!Flag)
	{
		bool swap = false;				//������־
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
