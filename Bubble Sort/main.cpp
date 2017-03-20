#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &nums)
{
    int sz = nums.size();
    for(int i = 0 ; i < sz ; i++)
    {
        for(int j = i+1 ; j < sz ; j++)
        {
            if(nums[i] > nums[j])
                swap(nums[i], nums[j]);
        }
    }
}

int main()
{
    int n;
    cout<<"Insert number of elements : ";
    cin>>n;
    vector<int>nums(n);

    for(int i = 0 ; i < n ; i++)
        cin>>nums[i];

    bubble_sort(nums);

    for(int i = 0 ; i < n ; i++)
        cout<< nums[i]<<" ";
    return 0;
}
/*
9
3 4 8 1 4 0 15 67 2
 */
