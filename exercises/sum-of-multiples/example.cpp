#include "sum_of_multiples.h"

using namespace std;

namespace sum_of_multiples
{

int to(initializer_list<int> const& multiples, int num)
{
    int sum = 0;
    for (int i = 0; i < num; ++i) 
    {
        for (const int multiple : multiples) 
        {
            if (i % multiple == 0) 
            {
                sum = sum + i;
                break;
            }
        }
    }
    return sum;
}

}
