#include <iostream>
#include <vector>

template<typename Container>
void move_vectors(Container& vector, Container& vector2)
{
    Container tmp = std::move(vector);
    vector = std::move(vector2);
    vector2 = std::move(tmp);
}

int main()
{
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::cout << "Vector: One" << std::endl;
    for (auto it : one)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    std::vector <std::string> two;
    move_vectors(one, two);
    std::cout << "Vector: Two" << std::endl;
    for (auto it : two)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    std::cout << "Vector: One" << std::endl;
    for (auto it : one)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    

}

