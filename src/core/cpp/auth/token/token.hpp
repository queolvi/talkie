#ifndef token_hpp
#define token_hpp
#include "src\core\cpp\user\adm\admin.hpp"
class token{
    private:
    long long token_;
    public:
    long long calculate_token(std::vector<uint8_t> k, int c);
    token();
    ~token();

};
#endif