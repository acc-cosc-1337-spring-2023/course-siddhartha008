#include "char.h"
#include <iostream>

using std::cout; 

int main()
{
    cout << "The ASCII value of character F is: " << get_char_ascii_value('F') << "\n";
    cout << "The ASCII value of character a is: " << get_char_ascii_value('a') << "\n";
    cout << "The ASCII value of character A is: " << get_char_ascii_value('A') << "\n";
    return 0;
}