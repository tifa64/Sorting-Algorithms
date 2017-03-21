#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>
class MergeSort
{
    public:
        MergeSort();
        void merge_array(std::vector<int>&l, std::vector<int>&r, std::vector<int>&nums, int n);
        void merge_sort(int n, std::vector<int>&nums);


        virtual ~MergeSort();
    protected:
    private:
};

#endif // MERGESORT_H
