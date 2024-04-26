#include <iostream>


int main(){
    for (size_t i = 1; i < 10; i++)
    {
        for (size_t j = 1; j < 10; j++)
        {
            std::cout << i << " * " << j << " = " << i*j << std::endl;
        }
        std::cout << "\n";
    }
    
    return 0;
}