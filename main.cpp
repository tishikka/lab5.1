#include <iostream>
#include <vector>
#include "function.h"

int main(){
    int input_1;
    std::cin >> input_1;

    std::vector <int> factorial = {1};
    for (int i = 2; i <= input_1; i++) {
        std::vector <int> n = factorial;
        for (int j = 0; j < i-1; ++j){
            factorial = sm(factorial, n);
        }
    }

    bool nul = true;
    for (int i = factorial.size() - 1; i >= 0; i--) {
        if (factorial[i] != 0) {
            nul = false;
        }
        if (!nul){
            std::cout << factorial[i];
        }
    }
}
