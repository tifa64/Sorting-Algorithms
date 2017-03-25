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


    vector<vector<int> >ans(5), temp(5);
    vector<int>l;
    vector<int>r;
    vector<int>inpt, temp_inpt;
    int sz, k = 0, v;

    cout<<"Welcome to Sorting Techniques"<<endl;

    //**Input**//

    cout<<"Enter # of elements"<<endl;
    cin>>sz;

    for(int i = 0 ; i < sz ; i++)
    {
        cin>>v;
        inpt.push_back(v);
    }
    temp_inpt = inpt;


    //**Selection**//
    cout<<"1) Selection Sort"<<endl;
    ss.selection_sort(inpt);

    for(int i = 0 ; i < sz ; i++)
        cout<<inpt[i]<<' ';
    cout<<endl;

    inpt = temp_inpt;


    //**Bubble**/
    cout<<"2) Bubble Sort"<<endl;
    bs.bubble_sort(inpt);

    for(int i = 0 ; i < sz ; i++)
        cout<<inpt[i]<<' ';
    cout<<endl;

    inpt = temp_inpt;


    //**Insertion**//
    cout<<"3) Insertion Sort"<<endl;
    is.insertion_sort(inpt);

    for(int i = 0 ; i < sz ; i++)
        cout<<inpt[i]<<' ';
    cout<<endl;

    inpt = temp_inpt;

    //**Heap**//
    cout<<"4) Heap Sort"<<endl;
    hs.heap_sort(inpt);

    for(int i = 0 ; i < sz ; i++)
        cout<<inpt[i]<<' ';
    cout<<endl;

    inpt = temp_inpt;


    //**Quick**//
    cout<<"5) Quick Sort"<<endl;
    qs.quick_sort(inpt, 1, sz);
    for(int i = 0 ; i < sz ; i++)
        cout<<inpt[i]<<' ';
    cout<<endl;

    inpt = temp_inpt;


    //**Merge**//
    cout<<"6) Merge Sort"<<endl;
    mg.merge_sort(sz, inpt);
    for(int i = 0 ; i < sz ; i++)
        cout<<inpt[i]<<' ';
    cout<<endl;

    inpt = temp_inpt;


    cout<<endl<<endl<<"By generation"<<endl<<endl;

    cout<<"1) Selection Sort"<<endl;

    for(long long int i = 100; i < 1000000 ; i *= 10)
    {
        g.gen_nums(i);
        ans[k] = g.get_vector();
        temp[k] = ans[k];
        sz = i;

        steady_clock::time_point t1 = high_resolution_clock::now();
        ss.selection_sort(ans[k]);
        steady_clock::time_point t2 = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>( t2 - t1 ).count();

        cout << "Time taken for this algorithm with size " << i << " is :" << duration<<endl;
        k++;
    }
    for(k = 0 ; k < 5 ; k++)
        ans[k] = temp[k];

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

    for(k = 0 ; k < 5 ; k++)
        ans[k] = temp[k];
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


    for(k = 0 ; k < 5 ; k++)
        ans[k] = temp[k];
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
    for(k = 0 ; k < 5 ; k++)
        ans[k] = temp[k];
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
    for(k = 0 ; k < 5 ; k++)
        ans[k] = temp[k];
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
