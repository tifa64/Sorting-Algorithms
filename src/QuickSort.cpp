#include "QuickSort.h"

#include <cstdlib>
#include <vector>
QuickSort::QuickSort()
{
    //ctor
}
int QuickSort::partitioning(std::vector<int>&nums, int low, int high)
{
    int bigger = nums[high];
    int lower_than_partition = low - 1;
    for(int j = low; j <= high - 1; j++)
    {
        if(nums[j] <= bigger)
        {

            lower_than_partition++;
            std::swap(nums[lower_than_partition], nums[j]);
        }
    }
    std::swap(nums[lower_than_partition+1], nums[high]);

    return lower_than_partition+1;
}

int QuickSort::random_partition(std::vector<int>&nums, int low, int high)
{
    int pivot = low+rand()%(high-low+1);
    std::swap(nums[pivot], nums[high]);

    return partitioning(nums, low, high);
}


void QuickSort::quick_sort(std::vector<int>&nums, int low,int high)
{
    int q;
    if(low < high)
    {
        q = random_partition(nums, low, high);
        quick_sort(nums, low, q-1);
        quick_sort(nums, q+1, high);
    }
}

QuickSort::~QuickSort()
{
    //dtor
}
