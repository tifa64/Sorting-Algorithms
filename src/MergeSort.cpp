#include "MergeSort.h"

#include <vector>

MergeSort::MergeSort()
{
    //ctor
}
void MergeSort::merge_array(std::vector<int>&l, std::vector<int>&r, std::vector<int>&nums, int n)
{
    int i, j, k;
    i = j = k = 0;
    int lenl = n/2, lenr = n-(n/2);

    while(i < lenl && j < lenr)
    {
        if(l[i] < r[j])
            nums[k++] = l[i++];

        else
            nums[k++] = r[j++];
    }
    while(i < lenl)
    {
        nums[k++] = l[i++];
    }


    while(j < lenr)
    {
        nums[k++] = r[j++];
    }
}

void MergeSort::merge_sort(int n, std::vector<int>&nums)
{
    if(n < 2)
        return;

    int mid = n/2;
    std::vector<int>l(n+1);
    std::vector<int>r(n-mid+1);

    for(int i = 0 ; i < mid ; i++)
        l[i] = nums[i];



    for(int i = mid ; i < n ; i++)
        r[i-mid] = nums[i];

    merge_sort(mid, l);
    merge_sort(n - mid, r);

    merge_array(l, r, nums, n);
}

MergeSort::~MergeSort()
{
    //dtor
}
