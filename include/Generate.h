#ifndef GENERATE_H
#define GENERATE_H
#include <vector>

class Generate
{
    public:
        Generate();
        void gen_nums(long long int n);
        std::vector<int> &get_vector();

        virtual ~Generate();
    protected:
    private:
        std::vector<int>nums;
};

#endif // GENERATE_H
