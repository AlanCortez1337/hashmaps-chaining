#include <vector>
#include <forward_list>

template <typename T>
class Hashmap
{
public:
    // ⭐TODO: create a default constructor to initialize an empty vector of linked-lists

    // ⭐TODO: create an insert function that takes a value T as input and inserts it into a designated bucket using k % N
    // 🌟FOLLOW-UP-TODO: Let's say the that the maximum amount of elements it can hold is 3.

    // ⭐TODO: create a display function that goes through every element in the vector and prints it out

private:
    std::vector<std::forward_list<T>> container_;
    std::size_t size_;
};