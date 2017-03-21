#include "InsertionSort.h"

#include <vector>

InsertionSort::InsertionSort()
{
    //ctor
}

void InsertionSort::insertion_sort(std::vector <int> &nums)
{
    int i, j, key, sz = nums.size( );
    for(i = 1; i < sz; i++)
    {
        key = nums[i];
        for(j = i - 1; (j >= 0) && (nums[j] > key); j--)
        {
            nums[j+1] = nums[j];
        }

        nums[j+1] = key;

    }

}

InsertionSort::~InsertionSort()
{
    //dtor
}
