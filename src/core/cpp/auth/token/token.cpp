#include "token.hpp"
int main () {
    token t{"words.txt"};
    t.calculate_random_symbols(1, 7);
    return 0;
}