#ifndef token_hpp
#define token_hpp
#include "C:\Users\korpa\Desktop\programming\talkie\src\utils\utils.hpp"
class token : public Parser{
    Parser p{"words.txt"};
    private:

str calculate_token(vec<str> data, u_sh id) {
        vec<str> result_push_data = push_data(data);
        vec<str> data_numbers(0);
        data_numbers.reserve(7);


    }
vec<str> calculate_random_symbols(size_t min, size_t max) {
    vec<str> result;
    int random_nums[7];
    random_number r;
    for (size_t i = 0, sz = 7; i < sz; ++i) {
        random_nums[i] = r.roll_dice(min, max);
    }
    
}

    vec<str> data;
vec<str> push_data(vec<str> data) {
    p.parse();
    for (const auto& word : words) {
        data.push_back(word);
    }
return data;
}
};
#endif