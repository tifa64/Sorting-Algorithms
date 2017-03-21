#include <iostream>
#include <vector>
#include <chrono>

#include <SelectionSort.h>
#include <Generate.h>
#include <BubbleSort.h>
#include <MergeSort.h>
#include <HeapSort.h>
#include <QuickSort.h>
#include <InsertionSort.h>
using namespace std;
using namespace std::chrono;


int main()
{
    BubbleSort bs;
    SelectionSort ss;
    MergeSort mg;
    Generate g;
    HeapSort hs;
    QuickSort qs;
    InsertionSort is;


    vector<vector<int> >ans(5);
    vector<int>l;
    vector<int>r;
    int sz, k = 0;

    cout<<"Welcome to Sorting Techniques"<<endl;

    cout<<"1) Selection Sort"<<endl;

    for(long long int i = 100; i < 1000000 ; i *= 10)
    {
        g.gen_nums(i);
        ans[k] = g.get_vector();
        sz = i;

        steady_clock::time_point t1 = high_resolution_clock::now();
        ss.selection_sort(ans[k]);
        steady_clock::time_point t2 = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>( t2 - t1 ).count();

        cout << "Time taken for this algorithm with size " << i << " is :" << duration<<endl;
        k++;
    }
    k = 0;
    cout<<endl;
    cout<<"2) Bubble Sort"<<endl;
    for(long long int i = 100; i < 1000000 ; i *= 10)
    {

        sz = i;

        steady_clock::time_point t1 = high_resolution_clock::now();
        bs.bubble_sort(ans[k]);
        steady_clock::time_point t2 = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>( t2 - t1 ).count();

        cout << "Time taken for this algorithm with size " << i << " is :" << duration<<endl;
        k++;
    }
    k = 0;
    cout<<endl;
    cout<<"3) Insertion Sort"<<endl;
    for(long long int i = 100; i < 1000000 ; i *= 10)
    {
        g.gen_nums(i);
        ans[k] = g.get_vector();
        sz = i;

        steady_clock::time_point t1 = high_resolution_clock::now();
        is.insertion_sort(ans[k]);
        steady_clock::time_point t2 = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>( t2 - t1 ).count();

        cout << "Time taken for this algorithm with size " << i << " is :" << duration<<endl;
        k++;
    }
    k = 0;
    cout<<endl;
    cout<<"4) Heap Sort"<<endl;
    for(long long int i = 100; i < 1000000 ; i *= 10)
    {

        sz = i;

        steady_clock::time_point t1 = high_resolution_clock::now();
        hs.heap_sort(ans[k]);
        steady_clock::time_point t2 = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>( t2 - t1 ).count();

        cout << "Time taken for this algorithm with size " << i << " is :" << duration<<endl;
        k++;
    }
    k = 0;
    cout<<endl;
    cout<<"5) Quick Sort"<<endl;
    for(long long int i = 100; i < 1000000 ; i *= 10)
    {

        sz = i;

        steady_clock::time_point t1 = high_resolution_clock::now();
        qs.quick_sort(ans[k], 1, sz);
        steady_clock::time_point t2 = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>( t2 - t1 ).count();

        cout << "Time taken for this algorithm with size " << i << " is :" << duration<<endl;
        k++;
    }
    k = 0;
    cout<<endl;
    cout<<"6) Merge Sort"<<endl;
    for(long long int i = 100; i < 1000000 ; i *= 10)
    {

        sz = i;

        steady_clock::time_point t1 = high_resolution_clock::now();
        mg.merge_sort(sz, ans[k]);
        steady_clock::time_point t2 = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>( t2 - t1 ).count();

        cout << "Time taken for this algorithm with size " << i << " is :" << duration<<endl;
        k++;
    }

    //hs.heap_sort(ans);






    return 0;
}
