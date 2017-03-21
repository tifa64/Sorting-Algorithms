#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

class QuickSort
{
    public:
        QuickSort();
        int partitioning(std::vector<int>&nums, int low, int high);
        int random_partition(std::vector<int>&nums, int low, int high);
        void quick_sort(std::vector<int>&nums, int low,int high);


        virtual ~QuickSort();
    protected:
    private:
};

#endif // QUICKSORT_H
