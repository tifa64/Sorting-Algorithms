#include "HeapSort.h"

#include <vector>

HeapSort::HeapSort()
{
    //ctor
}
int HeapSort::left(int idx)
{
    return (idx << 1) + 1;
}
int HeapSort::right(int idx)
{
    return (idx << 1) + 2;
}
void HeapSort::max_heapify(std::vector<int>& nums, int idx, int heap_size)
{
    int largest = idx;
    int l = left(idx), r = right(idx);

    if (l < heap_size && nums[l] > nums[largest])
        largest = l;

    if (r < heap_size && nums[r] > nums[largest])
        largest = r;

    if (largest != idx)
    {
        std::swap(nums[idx], nums[largest]);
        max_heapify(nums, largest, heap_size);
    }
}
void HeapSort::heap_sort(std::vector<int>& nums)
{
    int heap_size = nums.size();
    for (int i = (heap_size >> 1) - 1; i >= 0; i--)
        HeapSort::max_heapify(nums, i, heap_size);

    for(int i = heap_size - 1; i >=0 ; i--)
    {
        std::swap(nums[0], nums[i]);
        HeapSort::max_heapify(nums, 0, i);
    }
}
HeapSort::~HeapSort()
{
    //dtor
}
