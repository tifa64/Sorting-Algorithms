#include "Generate.h"
#include <vector>
#include <cstdlib>

Generate::Generate()
{
    //ctor
}
void Generate::gen_nums(long long int n)
{
    for(long long int i = 0 ; i < n ; i ++)
    {
        nums.push_back(rand());
    }

}
std::vector<int>&Generate::get_vector()
{
    return nums;
}
Generate::~Generate()
{
    //dtor
}
