#include "str.h"

int main() {
    std::string s = "hello";

    to_upper(s);
    //HELLO
    std::cout << s << std::endl;

    to_lower(s);
    //hello
    std::cout << s << std::endl;

    s += "              ";

    trim_end(s);
    //hello
    std::cout << s << std::endl;
}