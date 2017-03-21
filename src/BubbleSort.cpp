#include "BubbleSort.h"

#include <vector>
#include <iostream>

BubbleSort::BubbleSort()
{
    //ctor
}
void BubbleSort::bubble_sort(std::vector<int> &nums)
{
    int sz = nums.size();
    for(int i = 0 ; i < sz ; i++)
    {
        for(int j = i+1 ; j < sz ; j++)
        {
            if(nums[i] > nums[j])
                std::swap(nums[i], nums[j]);
        }
    }
}


BubbleSort::~BubbleSort()
{
    //dtor
}
