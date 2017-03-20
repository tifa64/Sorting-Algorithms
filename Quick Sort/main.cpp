#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int partition(vector<int>&nums, int low, int high)
{
    int bigger = nums[high];
    int lower_than_partition = low - 1;
    for(int j = low; j <= high - 1; j++)
    {
        if(nums[j] <= bigger)
        {

            lower_than_partition++;
            swap(nums[lower_than_partition], nums[j]);
        }
    }
    swap(nums[lower_than_partition+1], nums[high]);

    return lower_than_partition+1;
}

int random_partition(vector<int>&nums, int low, int high)
{
    int pivot = low+rand()%(high-low+1);
    swap(nums[pivot], nums[high]);

    return partition(nums, low, high);
}


void quick_sort(vector<int>&nums, int low,int high)
{
    int q;
    if(low < high)
    {
        q = random_partition(nums, low, high);
        quick_sort(nums, low, q-1);
        quick_sort(nums, q+1, high);
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


    int low = 1, r = n;

    quick_sort(nums, low, r);

    for(int i = 1; i <= n; i++)
        cout<<nums[i]<<' ';

    return 0;
}

