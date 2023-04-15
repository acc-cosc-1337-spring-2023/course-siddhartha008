#include <iostream>

using std::cout;

int main()
{
    auto num = 5;   /// int CPP declares the data type itself
    auto dec = 5.5; // double CPP declares the data type itself

    cout << "num is: " << num + num << "\n";
    cout << "dec is: " << dec + dec << "\n";

    return 0;
}