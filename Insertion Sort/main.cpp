#include <iostream>
#include <vector>
using namespace std;
void insertion_sort( vector <int> &nums)
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

        cout<<endl;
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

    insertion_sort(nums);

    for(int i = 0 ; i < n ; i++)
        cout<< nums[i]<<" ";
    return 0;
}
