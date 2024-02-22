#ifndef __array_delete__
#define __array_delete__

#include <cstddef>
#include <utility>
#include <vector>

template <typename T>
void array_delete(std::vector<T> &A, std::size_t index)
{
    int current = index;
    bool done = false;
    while (!done){

        if (current==(A.size()-1)){
            done=true;
        }else{
            A[current]=A[current+1];

        }


    }
}

#endif // __array_delete__