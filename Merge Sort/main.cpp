#include <iostream>
#include <vector>
using namespace std;


void merge_array(vector<int>&l, vector<int>&r, vector<int>&nums, int n)
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

void merge_sort(int n, vector<int>&nums)
{
    if(n < 2)
        return;

    int mid = n/2;
    vector<int>l(n+1);
    vector<int>r(n-mid+1);

    for(int i = 0 ; i < mid ; i++)
        l[i] = nums[i];



    for(int i = mid ; i < n ; i++)
        r[i-mid] = nums[i];

    merge_sort(mid, l);
    merge_sort(n - mid, r);

    merge_array(l, r, nums, n);
}



int main()
{
    int n;
    cout<<"Insert number of elements : ";
    cin>>n;
    vector<int>nums(n);

    for(int i = 0 ; i < n ; i++)
        cin>>nums[i];

    merge_sort(n, nums);

    for(int i = 0 ; i < n ; i++)
        cout<< nums[i]<<" ";
    return 0;
}
/*
9
3 4 8 1 4 0 15 67 2
 */
