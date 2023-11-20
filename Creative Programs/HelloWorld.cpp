#include <iostream>

namespace G {
    namespace P {
        namespace T {
            class Hello {
            public:
                void Print() {
                    std::cout << "Hello, World!" << std::endl;
                }
            };
        }
    }
}

int main() {
    G::P::T::Hello hello;
    hello.Print();
    return 0;
}
