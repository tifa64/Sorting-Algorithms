#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <vector>
class HeapSort
{
    public:
        HeapSort();
        int left(int idx);
        int right(int idx);
        void max_heapify(std::vector<int>& nums, int idx, int heap_size);
        void heap_sort(std::vector<int>& nums);

        virtual ~HeapSort();
    protected:
    private:
};

#endif // HEAPSORT_H
