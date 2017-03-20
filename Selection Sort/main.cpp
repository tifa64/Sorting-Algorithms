#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int>&nums)
{
//pos_min is short for position of min
	int pos_min, temp, sz = nums.size();

	for (int i=0; i < sz-1; i++)
	{
	    pos_min = i;//set pos_min to the current index of numsay

		for (int j=i+1; j < sz; j++)
		{

		if (nums[j] < nums[pos_min])
                   pos_min=j;
	//pos_min will keep track of the index that min is in, this is needed when a swap happens
		}

	//if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
            if (pos_min != i)
            {
                 temp = nums[i];
                 nums[i] = nums[pos_min];
                 nums[pos_min] = temp;
            }
	}
}

int main()
{
    int n;
    cout<<"Insert number of elements : ";
    cin>>n;
    vector<int>nums(n+1);

    for(int i = 1 ; i <= n ; i++)
        cin>>nums[i];

    selection_sort(nums);

    for(int i = 1; i <= n; i++)
        cout<<nums[i]<<' ';
    return 0;
}
