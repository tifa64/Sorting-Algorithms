#include <iostream>
#include <vector>
using namespace std;

int left(int idx)
{
    return (idx << 1) + 1;
}
int right(int idx)
{
    return (idx << 1) + 2;
}
void max_heapify(vector<int>& nums, int idx, int heap_size)
{
    int largest = idx;
    int l = left(idx), r = right(idx);

    if (l < heap_size && nums[l] > nums[largest])
        largest = l;

    if (r < heap_size && nums[r] > nums[largest])
    largest = r;

    if (largest != idx)
    {
        swap(nums[idx], nums[largest]);
        max_heapify(nums, largest, heap_size);
    }
}
void build_max_heap(vector<int>& nums)
{
    int heap_size = nums.size();
    for (int i = (heap_size >> 1) - 1; i >= 0; i--)
        max_heapify(nums, i, heap_size);

    for(int i = heap_size - 1; i >=0 ; i--)
    {
        swap(nums[0], nums[i]);
        max_heapify(nums, 0, i);
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

    build_max_heap(nums);

    for(int i = 0 ; i < n ; i++)
        cout<< nums[i]<<" ";
    return 0;
}
/*
9
3 4 8 1 4 0 15 67 2
*/
