#include <iostream>

int do_magic(int x) {
    if (x == 42) {
        return 42;
    }
    x=x*2;
    return x;
}
int main() {
    std::cout << do_magic(2) << '\n' ;
//Forgot to test do_magic(42)
}
