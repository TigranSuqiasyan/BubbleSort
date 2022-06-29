#include <iostream>
#include <vector>

template <typename T>
void bubble_sort(std::vector<T>& vec)
{
    int size = vec.size();
    bool is_sorted = false;
    T temp{};
    for(int i{1}; i < size; ++i)
    {
        is_sorted = true;
        for(int j{}; j < size - i; ++j)
        {
            if(vec[j] > vec[j + 1])
            {
                temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
                is_sorted = false;
            }
        }
        if(is_sorted)
            break;
    }
}

int main()
{
    std::vector<int> vec{1,5,9,6,7,8,4,5,59,86,95,0,-7,-78,25,69};
    bubble_sort(vec);
    for(int i{}; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
}