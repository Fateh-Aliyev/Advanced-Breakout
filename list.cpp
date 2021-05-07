#include <iostream>
#include <list>

void showList(std::list <int> g) {
    for (auto i = g.begin(); i != g.end(); ++i) {
        std::cout << *i << std::endl;
    }     
}

int main() {
    std::list <int> a = {0, 1, 2};
    showList(a);
    return 0;
}